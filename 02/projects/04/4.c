#include <stdio.h>

int main(void) {
    float pre_tax, after_tax;

    printf("Enter pre-tax amount\n");
    scanf("%f", &pre_tax);

    after_tax = pre_tax * 1.05;
    printf("With tax added: $%.2f\n",after_tax);
}