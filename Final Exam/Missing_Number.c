#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--) {
        long long int sum, a, b, c, res;
        scanf("%lld %lld %lld %lld", &sum, &a, &b, &c);
        res = a + b + c;
        printf("%lld\n", sum-res);
    }

    return 0;
}