#include <stdio.h>

int main(void) {
    printf("Enter a number: \n");

    int num, digit;
    int reversed = 0;
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    printf("The reversal is: %d \n", reversed);
}