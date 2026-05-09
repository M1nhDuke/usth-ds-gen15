#include <stdio.h>

int main() {
    double centigrade;
    scanf("%lf", &centigrade);

    double fahrenheit = (9.0 / 5.0) * centigrade + 32;

    printf("%.2lf\n", fahrenheit);

    return 0;
}