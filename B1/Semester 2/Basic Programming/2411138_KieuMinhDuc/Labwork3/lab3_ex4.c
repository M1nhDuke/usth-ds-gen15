#include<stdio.h>
#include<assert.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d", &n);
    assert(n > 1);

    long long p = 1;
    while(n){
        p *= n % 10;
        n /= 10;
    }

    printf("%lld", p);
    
    return 0;
}