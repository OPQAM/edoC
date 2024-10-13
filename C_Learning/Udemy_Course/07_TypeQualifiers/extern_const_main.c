/*Instead of this approach we can have a header file, like heard.h where we can put our constants, like so:
 *
 *(header.h)
 *
 * static const double PI = 3.14159;
 * static const char * MONTHS[12] = 
 *     {"January", "February", ...};
 *
 *
 * To use this file we #include "header.h"
 *
 * */

#include <stdio.h>

  static const double PI = 3.14159;
  static const char * MONTHS[12] = 
      {"January", "February", ...};

int main(void) {

    const float *pf;

    foat * const pt;

    const float * const ptr;

    ... 
        /*DO NOT COMPILE THIS FILE, extern_const.c
}
