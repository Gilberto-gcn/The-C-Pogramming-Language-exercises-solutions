/*Write a program that prints its input one word per line*/

#include <stdio.h>

#define IN 1 /*Insede a word*/
#define OUT 0 /*Otuside a word*/

int main()
{
    int c, state;
    state = OUT;

    while((c = getchar()) != EOF){
        
        if((c == ' ' || c == '\n' || c == '\t') && state){
            state = OUT;
            printf("\n");
        }
        if(c == ' ' || c == '\n' || c == '\t'){
            continue;
        }
        else {
            state = IN;
            putchar(c);
        }
    }

    return 0;
}