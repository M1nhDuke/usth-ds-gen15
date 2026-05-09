#include <stdio.h>

int main() {
    unsigned long long y;
    scanf("%llu", &y);

    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) printf("%llu is a leap year.\n", y); 
    else printf("%llu is not a leap year.\n", y);

    return 0;
}