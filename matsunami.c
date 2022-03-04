#include <stdio.h>
#include <string.h>

extern int sub();
extern int sub2(int, int);
extern int sub3(char *);

int main()
{
  // sub関数を呼び出す
  sub();

  int a;
  int b;
  int c;
  int d;
  int n;

  a = 1;
  b = 2;
  c = 3;
  d = 4;

  n = 50;

  // sub2(a, b);
  printf("%d\n", sub2(a, b));
  printf("%d\n", sub2(c, d));
  printf("%d\n", sub2(a, c));

  // sub3
  char ma[10];
  strcpy(&ma[0], "SSSS");
  printf("%s\n", ma);
  sub3(ma);
  printf("%s\n", ma);

  return 0;
}

int sub()
{
  int x;
  int y;
  int z;

  x = 5;
  y = 8;
  z = x + y;

  printf("%d\n", z);

  return 0;
}

int sub2(int x, int y)
{
  int z;

  z = x + y;
  return z;
}

int sub3(char *matsu)
{

  strcpy(&matsu[0], "AAAAA");
  printf("%s\n", &matsu[0]);
  return 0;
}

