/* stdarg.h */

#ifndef STDARG_H
#define STDARG_H

/* Figyelem, ez a file _nem_ eles hasznalatra valo,
   hanem arra, hogy az olyan artatlan es naiv programokat,
   amilyen peldaul az Oracle Pro*C vagy a SonarScanner
   megkimelje attol a rettenettol, amit a gcc eload
   stdarg.h neven.
 */

typedef void *va_list;

#define va_arg(ap,type) ((type)0)
#define va_start(ap,lastpar) ((void)(lastpar), ap= NULL)
#define va_end(ap)

#endif
