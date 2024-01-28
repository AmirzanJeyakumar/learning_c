#include <stdio.h>

/* print Celsius-Fahrenheit table */

int main() 
{
    float celsius, fahr;
    float lower, upper, step;

    lower = -100;
    upper = 100;
    step = 20;


    printf("Celsius Fahrenheit\n");
    celsius = lower;
    while (celsius <= upper) {
        fahr = ((9.0/5.0)*celsius) + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }
}