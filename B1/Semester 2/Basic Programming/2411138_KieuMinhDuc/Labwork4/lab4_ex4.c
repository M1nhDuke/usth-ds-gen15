#include<stdio.h>
#include "library.h"

int factorial(int n) {
    if (n == 0) return 1;
    return n*factorial(n-1);
}

int main() {
    int tt;
    scanf("%d", &tt);
    printf("%d\n", factorial(tt));
    printf("%d", fact(tt));
    return 0;
}