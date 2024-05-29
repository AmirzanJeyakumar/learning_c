#include <stdio.h>


void pay_amount(int input, int *twenty, int *ten, int *five, int *one) {
    int remainder;
    *twenty = input / 20;
    remainder = input % 20;

    *ten = remainder / 10;
    remainder = remainder % 10;

    *five = remainder / 5;
    remainder = remainder % 5;

    *one = remainder / 1;
}

int main(void) {
    printf("Enter a dollar amount: \n");

    int input, twenty, ten, five, one;
    scanf("%d",&input);
    pay_amount(input,&twenty,&ten,&five,&one);

    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf("$5 bills: %d\n", five);
    printf("$1 bills: %d\n", one);
}
