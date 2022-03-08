#include <stdio.h>

typedef struct
{
  int english;
  int math;
} score;

int main()
{
  score student[5];
  int i;
  int englishsum = 0;
  int mathsum = 0;

  for (i = 0; i < 5; i++)
  {
    printf("%d人目\n", i + 1);
    printf("英語：");
    scanf("%d", &student[i].english);
    printf("数学：");
    scanf("%d", &student[i].math);
  }

  printf("%d\n", student[3].english);
  printf("%d\n", student[4].english);

  for (i = 0; i < 5; i++)
  {
    englishsum += student[i].english;
    mathsum += student[i].math;
  }

  printf("英語の合計は%dです。\n数学の合計は%dです。\n", englishsum, mathsum);
  // student[0] = {100, 100};
  //  student[1] = {12, 21};
  // printf("%d,%d\n", student[0].english, student[0].math);
  //  printf("%d,%d\n", score[1].english, score[1].math);

  return 0;
}
