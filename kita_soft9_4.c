#include <stdio.h>

extern int triangle(int);

int main()
{
  //triangle(3);
  //triangle(4);
  int a;
  printf("好きな数字を入力\n");
  scanf("%d", &a);
  triangle(a);
  return 0;
}

int triangle(int size)
{
  int i;
  int j;
  for (i = 0; i < size; i++)
  {
    for (j = 0; j <= i; j++)
    {
      printf("悠");
    }
    printf("\n");
  }
  printf("\n");
  return size;
}