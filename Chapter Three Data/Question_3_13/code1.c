#include<stdio.h>
#include<limits.h>
int main()
{   
    printf("%d ~ ", SCHAR_MIN);
    printf("%d\n", SCHAR_MAX);
    printf("%d\n", UCHAR_MAX);
    printf("");

    printf("%d ~ ", SHRT_MIN);
    printf("%d\n", SHRT_MAX);
    printf("%d\n", USHRT_MAX);
    printf("");

    printf("%d ~ ", INT_MIN);
    printf("%d\n", INT_MAX);
    printf("%d\n", UINT_MAX);
    printf("");

    printf("%d ~ ", LONG_MIN);
    printf("%d\n", LONG_MAX);
    printf("%d\n", ULONG_MAX);
    printf("");
    
    return 0;
}