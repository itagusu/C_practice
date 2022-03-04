#include <stdio.h>

extern void func(char *);

int main()
{
  char str[10] = "COMPUTER";

  func(&str[0]);
  return 0;
}

void func(char *sr)
{
  printf("%s\n", sr);
}