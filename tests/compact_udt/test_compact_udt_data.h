#ifndef __TESTS_COMPACT_UDT_TESTDATA_H_
#define __TESTS_COMPACT_UDT_TESTDATA_H_

#include <stdint.h>
#include <vector>

#include "compact_udt_virtual_data.h"

namespace {
std::vector<CBuffer> type_id_pool = {
    CBuffer({
        0x6E, 0x29, 0x1D, 0xF1, 0x29, 0xC3, 0xB4, 0x33, 0x32, 0xE1, 0xCD,
        0xCC, 0x91, 0xE1, 0x90, 0x96, 0xEB, 0x3B, 0xEE, 0x50, 0x2D, 0x87,
        0x22, 0x55, 0x55, 0x34, 0x13, 0x01, 0x1F, 0xCF, 0xB9, 0x92,
    }),
    CBuffer({
        0x0E, 0x0A, 0xAE, 0xBE, 0xA5, 0x59, 0x50, 0x89, 0xDE, 0xA0, 0x1A,
        0x66, 0xC2, 0xEF, 0xBE, 0xAC, 0x6B, 0x62, 0x89, 0x96, 0x96, 0xBD,
        0xAE, 0xFB, 0x8D, 0x35, 0xC4, 0x69, 0x82, 0xCD, 0xAA, 0x49,
    }),
    CBuffer({
        0x41, 0x2E, 0x2A, 0x0A, 0x2A, 0xB5, 0x51, 0x8D, 0xC7, 0xBA, 0x48,
        0x1A, 0x11, 0xE3, 0xF3, 0x81, 0x71, 0x43, 0x1C, 0x77, 0xA6, 0xCF,
        0x93, 0x0D, 0x68, 0xC3, 0x56, 0xD0, 0xF4, 0x6F, 0x79, 0x6C,
    }),
    CBuffer({
        0xD1, 0xBD, 0x22, 0xA6, 0x5D, 0xC7, 0x97, 0x42, 0x9F, 0x9E, 0xBC,
        0x5A, 0x3F, 0xB5, 0x7C, 0x5E, 0x4A, 0xD8, 0xD9, 0xE4, 0xF0, 0x00,
        0xDB, 0x13, 0x09, 0xE6, 0xB1, 0x9C, 0x8F, 0x2C, 0x82, 0x96,
    }),
    CBuffer({
        0x6E, 0xFE, 0xF2, 0x9A, 0x34, 0x71, 0x3B, 0x10, 0xE9, 0x7A, 0x59,
        0xC5, 0x75, 0x5C, 0x1B, 0x5E, 0xE0, 0x88, 0x96, 0xEC, 0xCD, 0xCC,
        0x6F, 0x7E, 0x1E, 0xFB, 0x04, 0xAC, 0xC1, 0x70, 0x8A, 0xD0,
    }),
    CBuffer({
        0x83, 0x84, 0x4E, 0xA6, 0x37, 0x60, 0x6F, 0x04, 0x94, 0xA1, 0x2F,
        0x21, 0x72, 0x9D, 0x86, 0x64, 0xA4, 0x0C, 0x35, 0xC7, 0x0E, 0xED,
        0x54, 0x8C, 0x01, 0x18, 0xBA, 0x87, 0x11, 0xD3, 0x93, 0x95,
    }),
    CBuffer({
        0x95, 0x3C, 0xE7, 0xFD, 0x24, 0x68, 0x50, 0x3D, 0xC2, 0xCA, 0x31,
        0xFC, 0x80, 0x7F, 0x8C, 0xEF, 0xE1, 0x54, 0xC2, 0x9C, 0x67, 0xA0,
        0xC9, 0xCD, 0x9C, 0x8A, 0x00, 0xC6, 0x8D, 0x23, 0xF4, 0x14,
    }),
    CBuffer({
        0xD0, 0x7A, 0x3B, 0x91, 0x5F, 0xD9, 0xF2, 0x63, 0x57, 0x83, 0x06,
        0x6C, 0xA5, 0xC2, 0x45, 0x60, 0x91, 0xC7, 0x87, 0x66, 0xCB, 0x2D,
        0xE0, 0xD6, 0x6C, 0x9E, 0x0A, 0xC3, 0x7B, 0xB4, 0x9C, 0x2D,
    }),
    CBuffer({
        0x8B, 0xB4, 0xF0, 0xE3, 0x4E, 0x9B, 0xAC, 0x42, 0xBB, 0xB6, 0x9C,
        0xF0, 0x8B, 0x0B, 0x03, 0x49, 0xD7, 0x8B, 0xC6, 0x36, 0xD6, 0x40,
        0xB7, 0x9D, 0xFF, 0xDC, 0x59, 0x6D, 0x28, 0x7A, 0x07, 0xA5,
    }),
    CBuffer({
        0x92, 0xF6, 0x87, 0x04, 0x4A, 0x3E, 0x7A, 0x51, 0x21, 0x75, 0x27,
        0xF5, 0x84, 0x9A, 0x8D, 0x06, 0x31, 0x40, 0xA5, 0x11, 0x8A, 0x54,
        0x87, 0x51, 0x92, 0xBA, 0xFC, 0x60, 0x12, 0x23, 0x57, 0xBA,
    }),
    CBuffer({
        0xDA, 0x0D, 0xC8, 0x8C, 0x52, 0x38, 0x91, 0x85, 0x87, 0x5C, 0x4A,
        0xF8, 0x9A, 0x5B, 0x56, 0xA9, 0x7D, 0xDB, 0xEF, 0xF2, 0x53, 0x95,
        0x16, 0xF2, 0x84, 0x09, 0xB4, 0xB8, 0xEC, 0xC4, 0x72, 0x7C,
    }),
    CBuffer({
        0xB9, 0x80, 0xFC, 0xFB, 0x03, 0x95, 0xC1, 0x04, 0x8E, 0x21, 0xF0,
        0x5F, 0x77, 0x82, 0xBF, 0x53, 0x83, 0xC6, 0xF5, 0xD1, 0x1C, 0x3F,
        0x80, 0xA2, 0x9A, 0x96, 0xC9, 0x95, 0x23, 0xE3, 0xA0, 0xE7,
    }),
    CBuffer({
        0x63, 0xE0, 0x3B, 0x9A, 0x0F, 0x4B, 0x3F, 0x45, 0xC1, 0x97, 0x02,
        0x43, 0xBD, 0xA1, 0x53, 0xBB, 0xF0, 0x17, 0xB0, 0xC5, 0x8F, 0x68,
        0x63, 0x64, 0x9E, 0xF6, 0x7F, 0x5B, 0xF3, 0x44, 0x47, 0xEB,
    }),
    CBuffer({
        0xB0, 0x83, 0x90, 0xB3, 0x9C, 0x0C, 0xD4, 0xEE, 0xCB, 0x4A, 0x23,
        0x8E, 0xE1, 0xF8, 0x26, 0xD1, 0xE7, 0x9C, 0xDE, 0xB4, 0x1E, 0x6A,
        0xE5, 0x55, 0x3C, 0x62, 0x72, 0x10, 0x5A, 0xAC, 0xEB, 0x92,
    }),
    CBuffer({
        0x9D, 0x9D, 0x5E, 0xC4, 0x15, 0xCE, 0xB7, 0xFA, 0x63, 0x8F, 0x35,
        0xA9, 0x2C, 0x06, 0x54, 0x08, 0x58, 0xC2, 0x8E, 0x76, 0xC3, 0x09,
        0x8C, 0x28, 0x66, 0x69, 0x7E, 0xD0, 0x77, 0x14, 0x37, 0x86,
    }),
    CBuffer({
        0x6F, 0x18, 0x26, 0xAB, 0x60, 0x4C, 0x80, 0x12, 0x00, 0x89, 0x0C,
        0x88, 0xFF, 0x6E, 0x56, 0x69, 0x7E, 0x34, 0x32, 0xB1, 0x9C, 0xA6,
        0x0A, 0x69, 0xFB, 0x69, 0x9D, 0xDB, 0x90, 0xD8, 0x35, 0x33,
    }),
    CBuffer({
        0xF4, 0x34, 0xBF, 0xA1, 0xEE, 0xDE, 0xE3, 0x01, 0xA8, 0x8B, 0x28,
        0x35, 0x21, 0x0F, 0x64, 0xED, 0xE5, 0x8B, 0xF4, 0x2F, 0x45, 0x58,
        0x9F, 0xFA, 0xF8, 0x56, 0xBE, 0xCE, 0xC3, 0xA9, 0xC2, 0xF9,
    }),
    CBuffer({
        0xB9, 0x1C, 0x91, 0xCD, 0x83, 0xC1, 0xFF, 0xA5, 0x76, 0x71, 0x28,
        0xE7, 0x46, 0x9C, 0xDD, 0x5A, 0x85, 0x5C, 0x82, 0x02, 0xE5, 0xF6,
        0x3C, 0x89, 0x03, 0x1B, 0x26, 0xAD, 0xDF, 0x5C, 0xB7, 0x02,
    }),
    CBuffer({
        0x28, 0xF8, 0xB7, 0xD8, 0x99, 0x83, 0x98, 0xDB, 0x96, 0xE5, 0x94,
        0xEA, 0x84, 0x0B, 0xA0, 0xC0, 0x22, 0xDB, 0xD2, 0x8C, 0x88, 0xD0,
        0x5D, 0x57, 0x70, 0x3F, 0x0C, 0xF5, 0xCF, 0x60, 0x52, 0x2B,
    }),
    CBuffer({
        0xDB, 0x23, 0xBD, 0x7C, 0x87, 0xB9, 0xE1, 0x65, 0x37, 0x18, 0x76,
        0xE6, 0xB9, 0x29, 0xFF, 0xBD, 0x0A, 0x1A, 0xBA, 0x29, 0x53, 0x40,
        0x87, 0x5C, 0xE5, 0x69, 0xF9, 0x4F, 0x4F, 0xAC, 0xDA, 0x85,
    }),
    CBuffer({
        0x9C, 0xEA, 0xA8, 0x6E, 0xFD, 0x48, 0x23, 0xA8, 0x2A, 0xFD, 0x5D,
        0x86, 0x49, 0xFB, 0x59, 0xB8, 0x97, 0x54, 0x8D, 0xBB, 0x9A, 0xDA,
        0x75, 0xB9, 0xF1, 0xB8, 0x3A, 0x04, 0x0D, 0x66, 0x6B, 0xDF,
    }),
    CBuffer({
        0x17, 0x2C, 0x90, 0x53, 0xD6, 0xB4, 0xE3, 0xDD, 0x14, 0x8D, 0xB5,
        0x96, 0x09, 0xD8, 0x3D, 0xE0, 0xC0, 0x89, 0xD1, 0xD0, 0xE6, 0xC7,
        0xC1, 0x59, 0xFC, 0x28, 0xEE, 0x63, 0x12, 0xA9, 0x62, 0x35,
    }),
    CBuffer({
        0xF2, 0xC3, 0xA3, 0x37, 0x2F, 0xE2, 0x6E, 0xD3, 0xE6, 0xDF, 0xA5,
        0x1F, 0xBB, 0xDE, 0xAF, 0x4F, 0xA8, 0xE1, 0x39, 0xA3, 0x63, 0x45,
        0xC8, 0x39, 0x60, 0x85, 0x61, 0x6B, 0x3C, 0xA4, 0xE3, 0xB0,
    }),
    CBuffer({
        0xDD, 0xA0, 0xAA, 0xA2, 0xBC, 0xE0, 0xE4, 0xF7, 0xF1, 0x05, 0x84,
        0xD6, 0xFE, 0x0C, 0x11, 0x0E, 0x62, 0xA9, 0xDF, 0xC5, 0x8B, 0xD5,
        0x56, 0x5A, 0x62, 0x06, 0x25, 0x86, 0xC0, 0x05, 0x08, 0xBD,
    }),
    CBuffer({
        0xAE, 0x67, 0xB0, 0x72, 0x4D, 0xC5, 0x6D, 0x68, 0x5D, 0xF3, 0x52,
        0x39, 0xFB, 0x6A, 0x37, 0xEA, 0xE1, 0xCF, 0x9C, 0x09, 0x67, 0xCC,
        0x10, 0xED, 0xB2, 0x82, 0x4E, 0x9E, 0x41, 0x5B, 0xC5, 0x3B,
    }),
    CBuffer({
        0xAB, 0x9B, 0xA2, 0x8E, 0x42, 0xA3, 0xA8, 0xFC, 0x60, 0x5D, 0x04,
        0xE5, 0xC5, 0x0A, 0x04, 0x37, 0x01, 0x73, 0xD4, 0xFE, 0x0C, 0x05,
        0x52, 0xAE, 0x59, 0x18, 0x8A, 0x8D, 0xA3, 0xBA, 0x7B, 0x01,
    }),
    CBuffer({
        0x8E, 0xCD, 0x25, 0xF8, 0x8B, 0x7C, 0x42, 0x4A, 0xCA, 0xD6, 0xB4,
        0x37, 0x58, 0x12, 0x93, 0xB7, 0xF3, 0x1D, 0x82, 0xDF, 0x83, 0xA7,
        0xA1, 0xB6, 0xA5, 0x74, 0xA2, 0xC6, 0x77, 0xB6, 0xF0, 0x37,
    }),
    CBuffer({
        0xEF, 0x2A, 0xAD, 0x18, 0xA6, 0x82, 0xF8, 0x7B, 0xF6, 0x0D, 0xFC,
        0x27, 0xBF, 0x46, 0xBA, 0x9F, 0x78, 0x4E, 0xC5, 0xF1, 0x6F, 0x96,
        0x23, 0xD3, 0x77, 0x10, 0x1E, 0x91, 0xA0, 0x80, 0x26, 0xF9,
    }),
    CBuffer({
        0xA3, 0x97, 0x1C, 0x86, 0x5A, 0x56, 0xDD, 0xA2, 0x0B, 0x50, 0x63,
        0x3D, 0x09, 0xBD, 0xE3, 0x44, 0xDB, 0x46, 0x05, 0xD5, 0xAA, 0x61,
        0x68, 0x52, 0x81, 0x36, 0xDF, 0x10, 0xB4, 0xC4, 0x1A, 0xFD,
    }),
    CBuffer({
        0x25, 0xFD, 0x04, 0x61, 0x0D, 0x7E, 0xA9, 0x23, 0x21, 0x0A, 0x52,
        0x24, 0x09, 0x90, 0xD8, 0x71, 0x2E, 0x22, 0xEC, 0x54, 0x40, 0xA6,
        0x85, 0x3F, 0x15, 0xD4, 0x94, 0x68, 0xB0, 0xF0, 0x20, 0xDE,
    }),
    CBuffer({
        0x50, 0x2E, 0x57, 0x37, 0x88, 0x81, 0xC1, 0x2C, 0x04, 0x4B, 0x06,
        0xA0, 0x95, 0xE9, 0x59, 0x83, 0xE2, 0x4C, 0x27, 0x96, 0xAC, 0x22,
        0x38, 0xE2, 0xBB, 0xF2, 0x61, 0x54, 0x7A, 0x75, 0xBC, 0xF6,
    }),
    CBuffer({
        0x80, 0xDF, 0xF3, 0xAA, 0xFD, 0x4A, 0x6E, 0x57, 0x37, 0x3B, 0x21,
        0x3C, 0x17, 0xEC, 0x83, 0xFF, 0x15, 0xB5, 0x84, 0xA8, 0x46, 0x02,
        0x59, 0xD4, 0x5F, 0x4C, 0xA3, 0xA2, 0x2B, 0x19, 0x22, 0x82,
    }),
};
CBuffer key_00 = {
    0x00, 0x01, 0x26, 0x70, 0x63, 0x5B, 0x76, 0x43, 0x24, 0xC9, 0x35,
    0xF8, 0xDA, 0x06, 0x16, 0x12, 0x8F, 0x1F, 0xC2, 0x2C, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
CBuffer val_00 = {
    0x4A, 0x5A, 0x45, 0x55, 0xB8, 0x89, 0x7C, 0x4D, 0xC0, 0x35, 0x1C,
    0x48, 0xDA, 0xD6, 0x30, 0x75, 0xB8, 0x66, 0xC9, 0x77, 0x3D, 0xF4,
    0xD2, 0xD5, 0xDB, 0x30, 0x47, 0x7A, 0x05, 0xDD, 0x3B, 0x5D,
};
CBuffer key_01 = {
    0x00, 0xB0, 0x4D, 0xEE, 0x2A, 0xFA, 0xC4, 0xA0, 0x92, 0xF5, 0xB8,
    0xE3, 0x74, 0x92, 0xBD, 0xA0, 0x71, 0x8A, 0x82, 0x95, 0x11, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
CBuffer val_01 = {
    0xE2, 0x87, 0x9C, 0x2F, 0x0C, 0x9B, 0x52, 0x49, 0x10, 0x24, 0x4B,
    0x11, 0x2D, 0x47, 0x0E, 0xCA, 0x70, 0xD1, 0xEF, 0xC0, 0xD7, 0x6B,
    0xF3, 0x8D, 0xA7, 0x16, 0x37, 0x1D, 0x04, 0x74, 0xC1, 0x80,
};
CBuffer key_02 = {
    0x00, 0x14, 0x92, 0x40, 0x4A, 0x3B, 0x8B, 0x92, 0x3B, 0x50, 0xF6,
    0xCF, 0x6C, 0x7B, 0xFC, 0x4B, 0x8A, 0x53, 0x44, 0x85, 0x7C, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
CBuffer val_02 = {
    0xB7, 0x28, 0x7B, 0xE5, 0x3B, 0xFF, 0x13, 0x70, 0x3A, 0xCC, 0xF0,
    0xB0, 0xD0, 0x9C, 0x95, 0x12, 0xEB, 0xAE, 0xDE, 0x54, 0x79, 0xF6,
    0xD3, 0x9F, 0x80, 0xB2, 0x6F, 0x96, 0xFD, 0xB8, 0x9F, 0x6D,
};
CBuffer key_03 = {
    0x00, 0xAE, 0x78, 0x01, 0x86, 0x3F, 0xEB, 0x1C, 0xE5, 0x67, 0xCD,
    0xF8, 0x9F, 0x03, 0xAB, 0xF1, 0x81, 0x06, 0xF8, 0x95, 0x11, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
CBuffer val_03 = {
    0xFA, 0x1E, 0x50, 0xCD, 0x5B, 0x2A, 0x5B, 0xE9, 0xE5, 0x2D, 0x15,
    0x95, 0x84, 0x94, 0xA3, 0xD1, 0xC4, 0x53, 0xA6, 0xDD, 0x4F, 0xF2,
    0x86, 0x45, 0x7A, 0x35, 0xD7, 0x17, 0x69, 0xC0, 0xD0, 0x24,
};
CBuffer key_04 = {
    0x00, 0x0F, 0x84, 0x53, 0x72, 0xF4, 0xBC, 0xF3, 0x47, 0x4E, 0x53,
    0xCC, 0x5F, 0xA9, 0x60, 0x32, 0x70, 0xFE, 0x3C, 0xE4, 0xA1, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
CBuffer val_04 = {
    0x18, 0x9E, 0x81, 0xB4, 0x7E, 0x7F, 0xD9, 0xC9, 0x64, 0x1C, 0x6C,
    0xCF, 0x18, 0x08, 0x01, 0x22, 0x52, 0xD4, 0xA5, 0x78, 0x4E, 0x4F,
    0x79, 0xA3, 0x90, 0x3F, 0xED, 0x2D, 0x32, 0x5D, 0x03, 0x87,
};
CBuffer key_05 = {
    0x00, 0x95, 0x00, 0xF5, 0xFB, 0x43, 0x16, 0x59, 0xBA, 0x49, 0x4B,
    0xC4, 0x96, 0xC9, 0x28, 0x8D, 0x23, 0x12, 0x3F, 0x5B, 0xAF, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
CBuffer val_05 = {
    0x8C, 0x15, 0x1D, 0xE6, 0x89, 0x0D, 0xC9, 0xC2, 0xA2, 0xDF, 0xCA,
    0x08, 0xD0, 0xE9, 0x76, 0x73, 0xD4, 0xE5, 0x06, 0x90, 0x3D, 0x40,
    0x32, 0x33, 0x00, 0x50, 0x33, 0x83, 0x9E, 0x47, 0xC6, 0x5E,
};
CBuffer key_06 = {
    0x00, 0x0F, 0xF3, 0xA6, 0x08, 0xF9, 0xB7, 0xC9, 0x9A, 0x97, 0x6B,
    0x89, 0xB5, 0xB2, 0xAE, 0xB8, 0xCC, 0x79, 0xF1, 0xA8, 0xBF, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
CBuffer val_06 = {
    0xC3, 0x70, 0xC0, 0xCA, 0xAE, 0xD2, 0xF8, 0x23, 0x75, 0xE6, 0xED,
    0xA0, 0x87, 0xF9, 0xB0, 0xFB, 0x0F, 0xFD, 0x97, 0xA8, 0x72, 0x37,
    0x1C, 0x61, 0xD0, 0x8C, 0x6B, 0xD4, 0x81, 0x28, 0x7B, 0xEB,
};
CBuffer key_07 = {
    0x00, 0xB0, 0xE8, 0x2E, 0x9B, 0x3E, 0x74, 0xAD, 0xBE, 0x9F, 0x5C,
    0xCD, 0x04, 0xCF, 0xC2, 0x19, 0x94, 0xF1, 0x66, 0x9B, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
CBuffer val_07 = {
    0x7D, 0x97, 0x4B, 0x96, 0x9C, 0xE5, 0x16, 0x80, 0x3E, 0xF0, 0x10,
    0xA1, 0x3A, 0x00, 0x0E, 0x95, 0xE4, 0xF6, 0xF8, 0xC0, 0xEC, 0xED,
    0x95, 0x06, 0x26, 0x4B, 0x91, 0x2E, 0x9B, 0x4A, 0x80, 0xCF,
};
CBuffer key_08 = {
    0x00, 0xE0, 0x9A, 0x24, 0x4C, 0xB3, 0xF5, 0xB7, 0x1B, 0x37, 0xDA,
    0xED, 0xEA, 0xDB, 0x7F, 0xAF, 0xAF, 0x0A, 0x78, 0x19, 0xDA, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
CBuffer val_08 = {
    0x02, 0x33, 0x02, 0xBE, 0x7E, 0x4F, 0xD4, 0xDD, 0xA0, 0xAA, 0x84,
    0x19, 0xAF, 0xDF, 0x5F, 0xDB, 0x45, 0x84, 0x80, 0x30, 0x24, 0xE3,
    0x51, 0xF5, 0xB2, 0xB8, 0x48, 0x7E, 0xE4, 0x65, 0x1F, 0x72,
};
CBuffer key_09 = {
    0x00, 0x25, 0xD6, 0x57, 0xF6, 0x1E, 0x81, 0x52, 0x4F, 0xEB, 0x7D,
    0x1F, 0xA7, 0x5C, 0xCF, 0x23, 0x5B, 0x30, 0x42, 0xF3, 0xC7, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
CBuffer val_09 = {
    0x3B, 0x33, 0xAC, 0xD4, 0x7D, 0xD1, 0xD6, 0xA9, 0x99, 0x03, 0x05,
    0xC9, 0x60, 0xD8, 0xEE, 0xC5, 0x4A, 0x94, 0x05, 0x52, 0x7D, 0x3C,
    0x0F, 0x0D, 0x5C, 0xEA, 0x16, 0xBC, 0x5B, 0x54, 0xC0, 0x2C,
};
VD_Users users00 = {
    VD_User(key_00, 10),
    VD_User(key_01, 100),
    VD_User(key_02, 500),
};
CBuffer proof_00 = {
    0x4C, 0x4F, 0xA4, 0x4C, 0x4F, 0xA4, 0x48, 0x4F,
    0x01, 0x4C, 0x4F, 0xA6, 0x48, 0x4F, 0x59,
};
VD_Users users01 = {
    VD_User(key_00, 100),
    VD_User(key_02, 1000),
    VD_User(key_04, 50),
    VD_User(key_05, 300),
};
CBuffer proof_01 = {
    0x4C, 0x4F, 0xA6, 0x4C, 0x4F, 0xA6, 0x48, 0x4C, 0x4F, 0xA3,
    0x4C, 0x4F, 0xA3, 0x48, 0x4F, 0x03, 0x48, 0x4F, 0x58,
};
VD_Users users02 = {
    VD_User(key_02, 100),
    VD_User(key_04, 1100),
    VD_User(key_06, 5000),
};
CBuffer proof_02 = {
    0x4C, 0x4F, 0xA7, 0x4C, 0x4F, 0xA4, 0x4C, 0x4F,
    0xA4, 0x48, 0x4F, 0x02, 0x48, 0x4F, 0x58,
};
}  // namespace
inline void GenTestData(GenTx* tx) {
  int cell0 = tx->add_cell(10000, users00, true, proof_00);
  int cell1 = tx->add_cell(50000, users01, true, proof_01);
  int cell2 = tx->add_cell(50000, users02, true, proof_02);
  tx->add_transfer(cell0, key_00, cell1, key_02, 50, 1);
  tx->add_transfer(cell1, key_02, cell2, key_06, 100, 10);
  tx->add_transfer(cell1, key_00, cell1, key_02, 10, 10);
  tx->add_transfer(cell2, key_04, cell0, key_00, 1000, 10);
}
inline CHash GetCompactUDTScriptCodeHash() {
  CBuffer v00 = {
      0xF5, 0x3F, 0x4E, 0x05, 0xF8, 0xA0, 0x80, 0xA6, 0xB0, 0xC5, 0xC0,
      0x0A, 0xA4, 0x3B, 0xB5, 0x0E, 0x79, 0x10, 0xDD, 0xBA, 0xDD, 0xE2,
      0x35, 0x43, 0x86, 0x56, 0x3A, 0xB3, 0x36, 0xF7, 0x96, 0x9B,
  };
  return v00;
}
inline CHash GetOtherScriptCodeHash() {
  CBuffer v00 = {
      0x27, 0x78, 0xD1, 0x9B, 0xBE, 0x50, 0xC2, 0xF5, 0x06, 0x1D, 0x89,
      0x8C, 0xE1, 0xC5, 0x14, 0xC5, 0x46, 0x08, 0xB0, 0x50, 0xBF, 0xDB,
      0xDE, 0x85, 0xE4, 0x01, 0x1B, 0xCD, 0xAE, 0xA7, 0x3D, 0x7E,
  };
  return v00;
}
inline CHash GetNewTypeID() {
  static size_t count = 0;
  ASSERT_DBG((count <= type_id_pool.size()));
  return type_id_pool[count++];
}

#endif  // __TESTS_COMPACT_UDT_TESTDATA_H_
