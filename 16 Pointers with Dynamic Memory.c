#include <stdio.h>

int total;

int Square(int x)
{
  return x * x;
}

int SquareOfSum(int x, int y)
{
  int z = Square(x + y);
  return z;
}
int main(void)
{
  int a = 4, b = 8;
  total = SquareOfSum(a + b);
  printf("Output = %d", total);
  return 0;
}