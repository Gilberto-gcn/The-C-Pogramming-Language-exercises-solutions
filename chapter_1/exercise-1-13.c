/*Write a program to print a histogram of the lenght of words in its input.*/

#include <stdio.h>

int main()
{
    int histogram[10];
    int c, i=0;

    while((c = getchar()) != EOF){

        if(c==' ' || c=='\t' || c=='\n'){
            ++i;
        } else
            ++histogram[i];
    }
    printf("\n");
    
    
    for(int i=0; i<10; i++){
        for(int j=0; j<histogram[i]; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}