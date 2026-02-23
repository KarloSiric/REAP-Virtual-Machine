#ifndef __R_COMMON_H__
#define __R_COMMON_H__ 

#include <stdint.h>
#include <ctype.h>


typedef unsigned char       uint8_t;
typedef unsigned short      uint16_t;
typedef unsigned int        uint32_t;
typedef unsigned long long  uint64_t;
typedef signed char         int8_t;
typedef signed short        int16_t;
typedef signed int          int32_t;
typedef signed long long    int64_t;

typedef uint8_t             r_uint8;
typedef uint16_t            r_uint16;
typedef uint32_t            r_uint32;
typedef uint64_t            r_uint64;
typedef int8_t              r_int8;
typedef int16_t             r_in16;
typedef int32_t             r_int32;
typedef int64_t             r_int64;

typedef r_uint8             r_byte;         /* Raw memory byte */
typedef r_int32             r_word;         /* VM word (signed for math) */
typedef r_uint32            r_uword;        /* VM address since it is unsigned */
typedef r_uint32            r_size;         /* VM size of things */
typedef r_int32             r_bool;         /* BOOLEAN R_TRUE; R_FALSE */

#define R_TRUE              0x00000001      /* 1 in 32 bits */
#define R_FALSE             0x00000000      /* 0 in 32 bits */






















#endif  /* __R_COMMON_H__ END */
