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
  printf ("TWICE(3) is %d\n", TWICE(3));
  printf ("twice(3) is %d\n", twice(3));
  return 0;
} // main
