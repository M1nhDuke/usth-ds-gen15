#include<stdio.h>
#include<assert.h>
#include<math.h>

int main()
{
    unsigned long long n;
    scanf("%llu", &n);
    assert(n > 1);

    if (n % 2 == 0) printf("%llu ", (unsigned long long)2);
    for (unsigned long long i = 3; i <= sqrt(n); i += 2) if (n % i == 0) printf("%llu ", i);
    
    return 0;
}