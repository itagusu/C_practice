#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main()
{
  printf("松並の性格を選択してください。\n1.あほ　2.馬鹿　3.優しい\n");
  String b;
  scanf("%s", b);
  int a = atoi(b);

  if ((a == 1) || (a == 2))
  {
    printf("その通りです\n");
  }
  else if (a == 3)
  {
    printf("間違えています。そんなはずはございません。\n");
  }
  else
  {
    printf("屁理屈女ってことですか\n");
  }
  return (0);
}