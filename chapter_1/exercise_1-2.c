/*Experiment to find out what happens the printf's argument string contains \c, where c is some character not liste with \*/
#include <stdio.h>

int main()
{
    /* testing the \c char where c is a char that is no listed in the accepted char with "\" cause the program to ignore the "\" and print the  "c" char*/
    printf("Testing \6c character");
    return 0;
}
