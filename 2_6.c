#include <stdio.h>

int main()
{
  const int tax = 110;
  int fax = 50000;
  printf("50000円から40000円に値下げします\n");
  fax = 40000;
  printf("新しい金額は税込%d\n", fax * tax / 100);
  return (0);
}