/*Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0*/
#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    for(celsius=upper; celsius>=lower; celsius -= step){
        fahr = celsius*(9.0/5.0)+32;
        printf("%3.0f %6.1f\n", celsius, fahr);
    }

    return 0;
}