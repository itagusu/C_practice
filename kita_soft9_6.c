#include <stdio.h>

extern int kuku(int);

int main()
{
  int i;
  for (i = 1; i <= 9; i++)
  {
    kuku(i);
  }
  printf("\n");
  //3の段のみ表示
  kuku(3);
  return 0;
}

int kuku(int dan)
{
  int j;
  for (j = 1; j <= 9; j++)
  {
    int x = dan * j;
    printf("%3d", x);
  }
  printf("\n");

  return 0;
}