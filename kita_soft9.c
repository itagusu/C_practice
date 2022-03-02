#include <stdio.h>

extern int sub9(int);

int main()
{
  int a = sub9(10);
  int b = a + 10;
  printf("%d\n", b);
  return 0;
}

int sub9(int x)
{
  int z = x * x;
  return z;
}