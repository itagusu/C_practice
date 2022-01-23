#include <stdio.h>

int main()
{
  char str[5] = "ABCDE";
  int i;
  for (i = 0; i < 5; i++)
  {
    printf("str%d:str[%c]:address[%d]\n", i, str[i], &str[i]);
  }
  return (0);
}

// i = i+1