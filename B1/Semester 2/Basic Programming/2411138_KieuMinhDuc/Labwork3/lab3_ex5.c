#include<stdio.h>
#include<assert.h>
#include<math.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    assert(n > 1);
    // assume that the fibonacci sequence starts from 0 and 1

    long long a = 0, b = 1;
    printf("%lld ", a);

    while(b <= n){
        printf("%lld ", b);
        a += b;
        if(a != b){
            a ^= b;
            b ^= a;
            a ^= b;
        }    
    }
    
    return 0;
}