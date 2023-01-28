/* stdint.h */

#ifndef STDINT_H
#define STDINT_H

typedef signed char      int8_t;
typedef signed short     int16_t;
typedef signed int       int32_t;
typedef signed long long int64_t;
typedef signed long long intmax_t;

typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
typedef unsigned long long uint64_t;
typedef unsigned long long uintmax_t;

#if defined (_WIN64) || defined (LLP64)
    typedef int64_t  intptr_t;
    typedef uint64_t uintptr_t;
#else
    typedef signed   long intptr_t;
    typedef unsigned long uintptr_t;
#endif

typedef  int16_t  int_least16_t;
typedef  int32_t  int_least32_t;
typedef  int64_t  int_least64_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;

#endif
