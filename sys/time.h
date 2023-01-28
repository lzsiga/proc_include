/* ora/proc_include/sys/time.h */

#ifndef SYS_TIME_H
#define SYS_TIME_H

struct timeval {
    long tv_sec;     /* seconds */
    long tv_usec;    /* microseconds */
};

struct timezone;

int gettimeofday (struct timeval *tv, struct timezone *tz);
int settimeofday (const struct timeval *tv, const struct timezone *tz);

#endif
