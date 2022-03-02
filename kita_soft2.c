#include <stdio.h>

#define YEAR "何年生まれですか\n"

extern int Age();
extern int Birthday();
extern int change();

int main()
{
  // Age();
  // Birthday();
  change();
  return 0;
}

//年齢を標示する関数
int Age()
{
  // int age;
  // age = 27;
  printf("私の年齢は%d歳です\n", 27);
  return 0;
}

//誕生日を表示する関数
int Birthday()
{
  int year;
  int month;
  int day;

  month = 9;
  day = 6;
  printf(YEAR);
  scanf("%d", &year);
  printf("%d年 %d月 %d日\n", year, month, day);
  return 0;
}

// xとyを入れ替える関数
int change()
{
  int x = 3;
  int y = 8;
  int z;
  z = x;
  x = y;
  y = z;

  printf("x=%d,y=%d\n", x, y);
  return 0;
}