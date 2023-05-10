#include <stdio.h>
#include <limits.h>

#define ll long long int

void swap (ll *arr, int i, int j)
{
    ll temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void sortArr (ll * arr, ll n)
{
    int i, j;

    for (i = 0; i < n-1; i++) {
        int max = i;
        j = i+1;
        while (j < n) {
            if (arr[max] < arr[j])
                max = j;
            j++;
        }
        swap (arr, i, max);
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    ll arr[a];

    for (int i = 0; i < a; i++) scanf("%lld", &arr[i]);

    sortArr (arr, a);

    ll sum = 0;
    for (int i = 0; i < b; i++) 
        if (arr[i] > 0) sum += arr[i];
    printf("%lld\n", sum);

    return 0;
}