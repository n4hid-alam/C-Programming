#include <stdio.h>

int count_before_zero (int *arr, int size)
{
    int count = 0;

    for (; arr[count] != 0; count++);

    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = count_before_zero(arr, n);
    printf("%d\n", count);

    return 0;
}