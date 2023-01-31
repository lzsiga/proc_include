/* ora/proc_include/sys/types.h */

#ifndef SYS_TYPES_H
#define SYS_TYPES_H

/* On AIX, 'sys/types.h' defines 'size_t' and 'uintptr_t'
   (at least 'malloc.h' suggests so), we solve that via includes.

   Note: these files are meant only for the precompiling,
   not for normal usage.
 */

#include <stddef.h>
#include <stdint.h>

#endif
