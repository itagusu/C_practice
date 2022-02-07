#include <stdio.h>

extern int test();

int main()
{
  test();
  return (0);
}

int test()
{
  char str[5] = "ABCDE";
  int i;
  for (i = 0; i < 5; i++)
  {
    printf("str%d:str[%c]:address[%p]\n", i, str[i], &str[i]);
  }
  return (0);
}

// i = i+1