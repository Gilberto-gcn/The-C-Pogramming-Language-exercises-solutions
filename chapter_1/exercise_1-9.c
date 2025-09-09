/*Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank*/
#include <stdio.h>

int main()
{
    int c, flag;
    flag = 0;
    while((c = getchar()) != EOF){
        if(flag == 0 && c == ' ')
            putchar(c);
        if(c == ' ')
            flag = 1;
        else
            flag = 0;
        if(!flag)
            putchar(c);
    }

    return 0;
}