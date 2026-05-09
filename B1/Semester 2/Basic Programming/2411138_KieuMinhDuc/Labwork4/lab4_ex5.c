#include<stdio.h>
#include "library.h"

int powerm(int x, int n){
    if (n == 0 || x == 1) return 1;
    return x*powerm(x, n-1);
}

float normalm(float x, int n){
    if (n == 0 || x == 1) return 1;
    float ans = 1;
    for (int i = 0; i < n; i++) ans *= x;
    return ans;
} 

int main() {
    int n; float x;
    scanf("%f %d", &x, &n);
    printf("%f  %f\n", powerh(x, n), powerm(x, n));
    printf("%f  %f\n", normalh(x, n), normalm(x, n));
    return 0;
}