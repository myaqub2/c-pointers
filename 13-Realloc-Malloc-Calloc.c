#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int n;
  int i;
  printf("Enter size of array\n:");
  scanf("%d", &n);
  int *A = (int *)malloc(n * sizeof(int)); //dynamically allocated array
  {
    A[i] = i + 1;
  }
  int *B = (int *)realloc(NULL, n * sizeof(int)); //equivalent to malloc
  printf("Prev block address= %d, new address = %d\n", A, B);
  for (int i = 0; i < n; i++)
  {
    printf("%d\n", B[i]);
  }
  return 0;
}