/**
 * twice1.c
 *   A simple exploration of macros in C.
 */
 
#include <stdio.h>

#define SQUARE(X) ((X)*(X))

int
main (int argc, char *argv[])
{
  int x;
  printf ("SQUARE(3) is %d\n", SQUARE(3));
  printf ("SQUARE(3.5) is %lf\n", SQUARE(3.5));
  printf ("SQUARE(1+1) is %d\n", SQUARE(1+1));
  x = 2;
  printf ("SQUARE(x++) is %d\n", SQUARE(x++)); // 4 or 6 or 9 or 12
  printf("x is now %d\n", x);  // 4 or 3
  x = 2;
  printf ("SQUARE(++x) is %d\n", SQUARE(++x)); // 12 or 13
  printf("x is now %d\n", x);  // 4
  return 0;
} // main
