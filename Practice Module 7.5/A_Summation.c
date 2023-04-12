#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int sum = 0;

    for (long long int i = 0; i < n; i++) {
        long long int n;
        scanf("%lld", &n);
        sum += n;
    }
    sum = abs(sum);
    printf("%lld\n", sum);

    return 0;
}