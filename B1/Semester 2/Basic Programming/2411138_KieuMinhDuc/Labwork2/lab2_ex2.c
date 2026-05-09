#include <stdio.h>

int main() {
    double a, b, c, min, max;
    scanf("%lf %lf %lf", &a, &b, &c);
    min = max = a;

    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("Min: %.2lf\n", min);
    printf("Max: %.2lf\n", max);

    return 0;
}