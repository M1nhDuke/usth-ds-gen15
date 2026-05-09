#include "library.h"

int gcdhh(int a, int b){
    while (b != 0) {
        a = a % b;  
        a = a + b;  
        b = a - b;  
        a = a - b;  
    }
    return a;
}


float fxh(int x){
    return (float)x*2.5;
}


int gxh(int x, int y){
    return x*y;
}


int fact(int n){
    if (n == 0) return 1;
    return n*fact(n-1);
}


float powerh(float x, int n){
    if (n == 0 || x == 1) return 1;
    return x*powerh(x, n-1);
}


float normalh(float x, int n){
    if (n == 0 || x == 1) return 1;
    float ans = 1;
    for (int i = 0; i < n; i++) ans *= x;
    return ans;
} 