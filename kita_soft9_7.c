#include <stdio.h>

extern int sosu(int);

int main()
{
  int num;
  scanf("%d", &num);
  sosu(num);
  return 0;
}

int sosu(int num)
{
  int i;
  int j;
  for (i = 2; i < num; i++)
  {
    j = num / i;
    printf("%d\n", j);
  }

  return 0;
}