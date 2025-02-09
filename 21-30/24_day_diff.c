#include <stdio.h>

int getDays(int month, int day)
{
    int i, sum = 0;
    for(i = 1; i < month; i++)
    {
        if(i == 2) // 이 프로그램에서는 윤년을 감안하지 않는다.
        {
            sum += 28;
        }
        else if(i % 2 == 0) // i가 2의 배수라면 30 +
        {
            sum += 30;
        }
        else
        {
            sum += 31; // 홀수 월
        }
    }
    return sum + day;
}

int main(void)
{
    int month, day;
    scanf("%d %d", &month, &day);
    printf("1월 1일부터 해당 날짜까지 거리는 %d이다.\n", getDays(month, day));

    return 0;
}