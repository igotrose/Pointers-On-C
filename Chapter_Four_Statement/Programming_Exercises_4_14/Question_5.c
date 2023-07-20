
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

// 读取文本行
#include<stdio.h>
#include<string.h>

#define MAX_LENGTH 128

int main() 
{
    char line[MAX_LENGTH];
    while (fgets(line, MAX_LENGTH, stdin) != NULL)
    {
        /* code */
    }
    
    return 0;
}
