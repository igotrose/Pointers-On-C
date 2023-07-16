#include<stdio.h>
int main()
{   
    int which_word;
    scanf("%d\n", &which_word);
    switch (which_word)
    {
    case 1:
        printf("who\n");
        break;
    case 2:
        printf("what\n");
        break;
    case 3:
        printf("when\n");
        break;
    case 4:
        printf("where\n");
        break;
    case 5:
        printf("why\n");
        break;
    default:
        printf("don't know /n");
        break;
    }
    return 0;
}