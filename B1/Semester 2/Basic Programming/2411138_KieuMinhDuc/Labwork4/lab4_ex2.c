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
    int x, y, z, t;
    scanf("%d %d %d %d", &x, &y, &z, &t);
    printf("%d", gcdh(gcdh(x, y), gcdh(z, t)));
    return 0;
}