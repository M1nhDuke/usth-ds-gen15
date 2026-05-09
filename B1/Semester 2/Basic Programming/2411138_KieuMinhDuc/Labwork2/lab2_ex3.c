#include <stdio.h>

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("Initial state: a = %lld, b = %lld\n", a, b);

    if (a != b){
        a ^= b;
        b ^= a;
        a ^= b;
    }

    printf("Final state: a = %lld, b = %lld\n", a, b);

    return 0;
}