#include <stdio.h>

void min_max (int *arr, int n, int *min, int *max)
{
    *min = 100000;
    *max = -100000;
    for (int i = 0; i < n; i++) {
        if (arr[i] > *max)
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
    }
}

int main()
{
    int min, max, n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    min_max (arr, n, &min, &max);
    printf("%d %d\n", min, max);

    return 0;
}