#include <stdio.h>
int main(void)
{
    int in;
    printf("好きな値を入力してください→");  //半角で入力
    scanf("%d", &in);                  //値を入力
    printf("入力された値は%dです", in);   //入力された値を表示
    return 0;
}