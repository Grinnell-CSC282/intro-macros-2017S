/**
 * twice1.c
 *   A simple exploration of macros in C.
 */
 
#include <stdio.h>

#define TWICE(X) X+X

int 
twice(int x)
{
  return x+x;
} // twice

int
main (int argc, char *argv[])
{
  printf ("twice(3) is %d\n", twice(3));
  printf ("TWICE(3) is %d\n", TWICE(3));
  printf ("twice(7.42) is %lf\n", twice(7.42));
  printf ("TWICE(7.42) is %lf\n", TWICE(7.42));
  printf ("twice(1231231223) is %lf\n", twice(1231231));
  return 0;
} // main

