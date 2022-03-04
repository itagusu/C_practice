#include <stdio.h>

extern int add(int, int);

int main()
{
  int a = 10;
  int b = 20;

  int e = add(a, b);
  printf("%d\n", e);
  return 0;
}

int add(int x, int y)
{
  int s = x + y;
  return s;
}