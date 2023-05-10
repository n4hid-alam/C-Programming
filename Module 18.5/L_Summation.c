#include <stdio.h>

int n;

long long print (long long * arr)
{
    if (n == 0) 
        return 0;

    return arr[--n] + print(arr);
}

int main()
{
    scanf("%d", &n);
    long long arr[n];

    for (int i = 0; i < n; i++) scanf("%lld", &arr[i]);

    long long sum = print (arr);
    printf("%lld\n", sum);

    return 0;
}