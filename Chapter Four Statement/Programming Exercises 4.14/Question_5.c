/*
This is the first line.
Another line.
And another.
And another.
And another.
Still more.
Almost done now --
Almost done now --
Almost done now --
Another line.
Still more
Finished.
*/
#include<stdio.h>
#include<string.h>

#define TRUE 1
#define FALSE 0

#define LINE_SIZE 129
int main()
{
    char input[LINE_SIZE], previous_line[LINE_SIZE];
    int printed_from_group = FALSE;
    
    if (gets(previous_line) != NULL);   
    {
        while (gets(input) != NULL)     
        {
            if (strcmp(input, previous_line) != 0)  
            {
                printed_from_group = FALSE;         
                strcpy(previous_line, input);       
            }
            else if (!printed_from_group)           
            {
                printed_from_group = TRUE;
                printf("%s\n", input);
            }    
        }   
    }
    return 0;
}