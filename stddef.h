/* stddef.h */

#ifndef STDDEF_H
#define STDDEF_H

/* Not for actual usage, use only with precompilers like Pro*C */

typedef long          ssize_t;
typedef unsigned long size_t;

typedef long int ptrdiff_t;

#ifndef offsetof
    #define offsetof(T,F) ((size_t)((char *)&(((T *)0)->F)))
#endif

#define __attribute__(unused)

#endif
