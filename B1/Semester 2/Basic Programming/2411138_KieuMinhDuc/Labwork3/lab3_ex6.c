#include<stdio.h>
#include<assert.h>
#include<math.h>

long long fact(int n){
    if (n == 1) return 1;
    return n*fact(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    assert(n > 0);

    printf("%lld", fact(n));
    
    return 0;
}