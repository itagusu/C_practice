#include <stdio.h>

extern int sub9_1(int);
extern int sub9_2(int, int);

int main()
{
  /*
  int a = sub9_1(10);
  int b = a + 10;
  printf("%d\n", b);
  */
  printf("数字を入力\n");
  int a;
  int b;
  scanf("%d", &a);
  scanf("%d", &b);
  printf("%d\n", sub9_2(a, b));
  return 0;
}

int sub9_1(int x)
{
  int z = x * x;
  return z;
}

int sub9_2(int x, int y)
{
  int z = (x + y) / 2;
  return z;
}