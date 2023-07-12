#include<stdio.h>
#include<float.h>
int main()
{
    printf("%f ~ ", FLT_MIN);
    printf("%f\n", FLT_MAX);
    printf("\n");

    printf("%lf ~ ", DBL_MIN);
    printf("%lf\n", DBL_MAX);
    printf("\n");

    printf("%llf ~ ", LDBL_MIN);
    printf("%llf\n", LDBL_MAX);
    printf("\n");
    return 0;
}