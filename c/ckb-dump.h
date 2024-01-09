#ifndef CKB_C_CKB_DUMP_H_
#define CKB_C_CKB_DUMP_H_
#define CKB_C_STDLIB_PRINTF
#include <stdio.h>

//
#include <stddef.h>
#include <stdint.h>

#define PrintCompactBin

void _print_16bytes(const uint8_t* buf) {
    printf(
        "%02x, %02x, %02x, %02x, %02x, %02x, %02x, %02x, %02x, %02x, %02x, "
        "%02x, %02x, %02x, %02x, %02x, ",
        buf[0], buf[1], buf[2], buf[3], buf[4], buf[5], buf[6], buf[7], buf[8],
        buf[9], buf[10], buf[11], buf[12], buf[13], buf[14], buf[15]);
}

void hex_to_str(uint8_t c, char* s) {
    char c_l = c & 0xf;
    char c_h = c >> 4;

    if (c_l > 9) {
        s[1] = c_l + 'a' - 0xA;
    } else {
        s[1] = c_l + '0';
    }

    if (c_h > 9) {
        s[0] = c_h + 'a' - 0xA;
    } else {
        s[0] = c_h + '0';
    }
}

void _sprint_mem(char* s, const uint8_t* buf, size_t len) {
    for (size_t i = 0; i < len; i++) {
        hex_to_str(buf[i], s);
#ifndef PrintCompactBin
        s[2] = ',';
        s[3] = ' ';
        s += 4;
#else   // PrintCompactBin
        s += 2;
#endif  // PrintCompactBin
    }
}

void print_mem(const uint8_t* buf, size_t buf_size, const char* name) {
    printf("%s, size(%d), ptr(0x%x)", name, buf_size, buf);

#ifdef PrintCompactBin
    for (size_t i = 0; i < buf_size; i += 64) {
        size_t sp_size = 0;
        if (buf_size - i >= 64) {
            sp_size = 64;
        } else {
            sp_size = buf_size - i;
        }
        char s[512] = {0};
        _sprint_mem(s, &buf[i], sp_size);
        printf(s);
    }
#else   // PrintCompactBin
    for (size_t i = 0; i < buf_size; i += 16) {
        if (buf_size - i >= 16) {
            _print_16bytes(buf + i);
        } else {
            char s[256] = {0};
            _sprint_mem(s, &buf[i], buf_size - i);
            printf(s);
            break;
        }
    }
#endif  // PrintCompactBin
}

#define DBG_STR(s) #s
#define PRINT_MEM1(buf) print_mem(buf, sizeof(buf), DBG_STR(buf))
#define PRINT_MEM2(buf, len) print_mem(buf, len, DBG_STR(buf))
#define PRINT_MEM3(buf, len, name) print_mem(buf, len, name)

void _test() {
    uint8_t tmp1[] = {0x00};
    PRINT_MEM1(tmp1);
    uint8_t tmp2[] = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    };
    PRINT_MEM1(tmp2);
    uint8_t tmp3[] = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
    };
    PRINT_MEM1(tmp3);
    uint8_t tmp4[] = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x05,
    };
    PRINT_MEM1(tmp4);
}

#endif  //CKB_C_CKB_DUMP_H_