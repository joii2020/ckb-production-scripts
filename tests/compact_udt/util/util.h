#ifndef _TESTS_COMPACT_UDT_UTIL_UTIL_H_
#define _TESTS_COMPACT_UDT_UTIL_UTIL_H_
#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <array>
#include <string>
#include <vector>

using namespace std;

#include "compact_udt_lock.h"
#include "simulator/compact_udt_lock_inc.h"

int hex2bin(uint8_t* buf, const char* src);
void random_mem(uint8_t* data, uint32_t len);

void script_hash_randfull(Hash* hash);

typedef vector<uint8_t> CBuffer;
CBuffer load_file(std::string path);
CBuffer decode_hex(std::string data);

template <size_t T>
class CData {
 public:
  CData() {}
  CData(const CBuffer& buf) {
    auto len = buf.size() < T ? buf.size() : T;
    memcpy(buf_.data(), buf.data(), len);
  }
  CData(const string& s) { hex2bin(buf_.data(), s.c_str()); }
  CData(uint8_t* buf, uint32_t len) {
    uint32_t l = T > len ? len : T;
    memcpy(buf_.data(), buf, l);
  }

  void rand_fill() { random_mem(buf_.data(), buf_.size()); }
  static CData srand_fill() {
    CData ret;
    ret.rand_fill();
    return ret;
  }
  void copy(uint8_t* hash) const { memcpy(hash, buf_.data(), buf_.size()); }
  uint8_t* get() { return (uint8_t*)buf_.data(); }
  const uint8_t* ptr() const { return buf_.data(); }
  static size_t len() { return T; }

  bool operator==(const CData<T>& o) {
    return memcmp(buf_.data(), o.buf_.data(), buf_.size()) == 0;
  }
  bool operator!=(const CData<T>& o) {
    return memcmp(buf_.data(), o.buf_.data(), buf_.size()) != 0;
  }

  void operator=(const CData<T>& o) { buf_ = o.buf_; }

 private:
  array<uint8_t, T> buf_ = {0};
};

typedef CData<32> CHash;
typedef CData<21> CIdentity;
CIdentity CHashToCId(const CHash* h);

class AutoSBuf {
 public:
  AutoSBuf() { ASSERT_DBG(false); }
  AutoSBuf(AutoSBuf&& a) {
    buf_.buf = a.buf_.buf;
    buf_.len = a.buf_.len;
    a.buf_.buf = NULL;
    a.buf_.len = 0;
  }
  AutoSBuf(SBuffer buf) : buf_(buf) { ASSERT_DBG(buf_.len); }
  AutoSBuf(CBuffer& buf) {
    buf_ = cudtmol_alloc(buf.size());
    memcpy(buf_.buf, buf.data(), buf.size());
  }
  AutoSBuf(const CHash h) : buf_(cudtmol_alloc(h.len())) { h.copy(buf_.buf); }
  AutoSBuf(const CIdentity h) : buf_(cudtmol_alloc(h.len())) {
    h.copy(buf_.buf);
  }
  AutoSBuf(const uint128_t h) : buf_(cudtmol_alloc(sizeof(uint128_t))) {
    memcpy(buf_.buf, &h, sizeof(uint128_t));
  }
  ~AutoSBuf() {
    if (buf_.buf)
      cudtmol_free(&buf_);
  }

  CBuffer copy() {
    CBuffer b;
    b.resize(buf_.len);
    memcpy(b.data(), buf_.buf, buf_.len);
    return b;
  }
  SBuffer* get() { return &buf_; }
  uint8_t* ptr() { return buf_.buf; }
  uint32_t len() const { return buf_.len; }

 private:
  SBuffer buf_;
};

class Blake2b {
 public:
  Blake2b();
  ~Blake2b();

  void Update(void* d, size_t l);
  void Update(CHash* h);
  CHash Final();

 private:
  void* state_;
};

class SMT {
 public:
  SMT();
  ~SMT();
  void insert(CHash* key, CHash* val);
  bool verify(CBuffer& proof, CHash& root);
  CHash calculate_root(const CBuffer& proof);

 private:
  CUDT_SMT_H smt_h_;
};

class CKBKey {
 public:
  CKBKey();
  CKBKey(CHash pri);
  ~CKBKey();

  CIdentity get_pubkey_hash();
  CBuffer signature(const CHash* msg);

 private:
  CHash priv_key_;
  void* ctx_ = nullptr;
};

#endif  // _TESTS_COMPACT_UDT_UTIL_UTIL_H_
