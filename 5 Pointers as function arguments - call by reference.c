#include <stdio.h>
int main(void)
{
  int A[] = {2, 4, 5, 8, 1};
  printf("%d\n", A);
  printf("%d\n", &A[0]);
  printf("%d\n", A[0]);
  return 0;
}