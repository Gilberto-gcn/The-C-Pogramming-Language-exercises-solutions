/*Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguos ways*/
#include <stdio.h>

#include <stdio.h>

int main()
{
      int c, flag = 0;
    while((c = getchar()) != EOF){
        if(c == '\t')
            printf("\\t");
            flag = 1;
        if(c == '\b')
            printf("\\b");
        if(c == '\\')
            printf("\\\\");
        else
            putchar(c);
    }

    return 0;
}