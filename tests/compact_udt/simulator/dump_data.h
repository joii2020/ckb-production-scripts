

#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
}
#endif  // __cplusplus

#ifdef __cplusplus

class CDumpData {
 private:
  CDumpData();

 public:
  ~CDumpData();
  static CDumpData* get();

  bool using_dump();

  bool set_group_index(int index);
  int get_cell_count();

  int load_tx_hash(void* addr, uint64_t* len, size_t offset);
  int load_script_hash(void* addr, uint64_t* len, size_t offset);
  int load_cell_data(void* addr,
                     uint64_t* len,
                     size_t offset,
                     size_t index,
                     size_t source);
  int load_script(void* addr, uint64_t* len, size_t offset);
  int calculate_inputs_len();
  int load_witness(void* addr,
                   uint64_t* len,
                   size_t offset,
                   size_t index,
                   size_t source);
  int load_cell_by_field(void* addr,
                         uint64_t* len,
                         size_t offset,
                         size_t index,
                         size_t source,
                         size_t field);

 private:
  bool using_dump_ = false;
  int group_index_ = -1;
};

#endif  // __cplusplus

#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus

bool dd_using_dump();
int dd_load_tx_hash(void* addr, uint64_t* len, size_t offset);
int dd_load_script_hash(void* addr, uint64_t* len, size_t offset);
int dd_load_cell_data(void* addr,
                      uint64_t* len,
                      size_t offset,
                      size_t index,
                      size_t source);
int dd_load_script(void* addr, uint64_t* len, size_t offset);
int dd_calculate_inputs_len();
int dd_load_witness(void* addr,
                    uint64_t* len,
                    size_t offset,
                    size_t index,
                    size_t source);
int dd_load_cell_by_field(void* addr,
                          uint64_t* len,
                          size_t offset,
                          size_t index,
                          size_t source,
                          size_t field);

#ifdef __cplusplus
}  // extern "C"
#endif  // __cplusplu