#include <stdio.h>
#include <math.h>

int main(void) {
    double radius, volume;
    scanf("%lf", &radius);

    volume = (4.0/3.0) * M_PI * pow(radius,3);
    printf("Volume: %.2lf\n",volume);
}