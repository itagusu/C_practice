#include <stdio.h>

typedef char String[1024];

int main()
{
  // const int tax = 110;
  // int fax = 50000;
  // printf("50000円から40000円に値下げします\n");
  // fax = 40000;
  // printf("新しい金額は税込%d\n", fax * tax / 100);
  int age = 27;
  int newAge = age + 1;
  String name = "板楠亮";
  printf("名前は%sと申します。%d歳です。今年で%d歳になります。\n",name,age,newAge);
  return (0);
}