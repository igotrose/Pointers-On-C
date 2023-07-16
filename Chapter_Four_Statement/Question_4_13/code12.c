// 判断闰年平年
#include<stdio.h>
int main()
{
    int year, leap_year;
    printf("please input a year:->\n");
    scanf("%d\n", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        leap_year = 1;
    }
    else
    {
        leap_year = 0;
    }
    printf("%d\n", leap_year);
    return 0;
}