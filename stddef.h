/* stddef.h */

#ifndef STDDEF_H
#define STDDEF_H

typedef long         ssize_t;
typedef unsigned long size_t;

typedef long int ptrdiff_t;

#ifndef offsetof
    #define offsetof(T,F) ((size_t)((char *)&(((T *)0)->F)))
#endif

#define __attribute__(unused)

#define inline /* older versions of Pro*C don't support inline */

#endif
