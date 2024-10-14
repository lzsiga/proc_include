/* ora/proc_include/sys/timeb.h */

#ifndef SYS_TIMEB_H
#define SYS_TIMEB_H

#include <time.h>

struct timeb {
    time_t          time;           /* Seconds */
    unsigned short  millitm;        /* milliseconds */
    short           timezone;       /* Local timezone in minutes */
    short           dstflag;        /* TRUE if DST is in effect */
};

int ftime (struct timeb *);

#endif
