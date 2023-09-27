#include<stdio.h>

void ascii_to_integer(char *string)
{
    int num = 0;
    while (*string != '\0')
    {
        if (*string >= '0'&& *string <= '9')
        {
            num = *string - '0';
            printf("%d ",num * 11);
        }
        string++;
    }
}

int main()
{
    char str[] = "adf2341dfds";
    ascii_to_integer(str);
    return 0;
}