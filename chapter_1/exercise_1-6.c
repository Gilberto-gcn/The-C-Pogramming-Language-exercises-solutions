/*Verify that the expression getchar9 != EOF is 0 or 1*/
#include <stdio.h>

int main()
{
    int c;
    c = getchar() != EOF;
    printf("%d", c);
    
    
    return 0;
}