#include <stdio.h>

extern int aisatu();

int main()
{
  printf("Hello World1\n");
  aisatu();
  return 0;
}

int aisatu()
{
  printf("Hello World2\n");
  return 0;
}