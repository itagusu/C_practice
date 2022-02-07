#include <stdio.h>

int main()
{
  itagusuFam();
  return (0);
}

int itagusuFam()
{
  struct itaFam
  {
    char name[5 + 1];
    int age;
    char relationship[2 + 1];
  } typedef struct itaFam ita;
  ita ryo = {"亮", 27, "父"};
  ita miyu = {"未侑", 27, "母"};
  ita haru = {"悠", 0, "息子"};

  printf(% s, ryo.name);
}
