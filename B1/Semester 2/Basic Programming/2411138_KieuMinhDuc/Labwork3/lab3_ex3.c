#include<stdio.h>
#include<assert.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d", &n);
    assert(n > 1);

    double s = 0;
    for (int i = 1; i <= n; i++) s += (double)1/i;

    printf("%f", s);
    
    return 0;
}