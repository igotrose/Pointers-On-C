// 判断闰平年
#include<stdio.h>
int main()
{
    int year, leap_year;
    scanf("%d\n", &year);
    if( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 )
    {
        leap_year = 1;
    }
    else
    {
        leap_year = 0;
    }
    return 0;
}