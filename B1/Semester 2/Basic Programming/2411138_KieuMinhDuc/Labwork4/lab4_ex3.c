#include<stdio.h>
#include "library.h"

float fxm(int x){
    return (float)x*2.5;
}

int gxm(int x, int y){
    return x*y;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%f  %f", fxh(x), fxm(x));
    printf("%d  %d", gxh(x, y), gxm(x, y));
    return 0;
}