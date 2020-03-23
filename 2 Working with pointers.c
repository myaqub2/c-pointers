#include <stdio.h>

int main(void)
{
  int a = 10;
  int *p;
  p = &a;
  // Pointer Arithmetic
  printf(" %d\n", *p); //value of p = a
  printf(" %d\n", *p + 1);
  return 0;
}