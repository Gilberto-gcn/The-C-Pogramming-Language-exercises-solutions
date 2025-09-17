/*Rewrite the temperature conversion program of section 1.2 to use a function for conversion*/
#include <stdio.h>

void celsiusFahrenheit(int lower, int upper, int step){
    float fahr, celsius;

    celsius = lower;
    printf("Fahrenheit to Celsius table:\n");
    while (celsius <= upper){
        fahr = celsius*(9.0/5.0)+32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }
} 

int main()
{
    celsiusFahrenheit(0, 300, 20);
    return 0;
}