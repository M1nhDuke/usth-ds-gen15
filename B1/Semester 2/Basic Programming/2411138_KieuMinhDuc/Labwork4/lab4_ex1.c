#include<stdio.h>
#include "library.h"

int gcdm(int a, int b) {
    while (b != 0) {
        a = a % b;  
        a = a + b;  
        b = a - b;  
        a = a - b;  
    }
    return a;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\nn", gcdh(x, y));
    printf("%d", gcdm(x, y));
    return 0;
}