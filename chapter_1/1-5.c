#include <stdio.h>

#define LOWER -100
#define UPPER 100
#define STEP 20

/* print Celsius-Fahrenheit table in reverse order */
int main()
{
    printf("Celsius Fahrenheit\n");

    double fahr;
    for (double celsius = UPPER; celsius >= LOWER; celsius -= STEP) {
        fahr = ((9.0/5.0)*celsius) + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
    }
}