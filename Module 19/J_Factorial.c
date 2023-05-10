#include <stdio.h>

#define ll long long int

ll facto (ll n)
{
    if (n == 0)
        return 1;
        
    return n * facto(n-1);
}

int main()
{
    ll n;
    scanf("%lld", &n);

    printf("%lld\n", facto(n));

    return 0;
}