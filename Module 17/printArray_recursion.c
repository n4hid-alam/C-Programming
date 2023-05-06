#include <stdio.h>

void printArr (int *arr, int n, int i)
{
    if (i == n) return;
    printf("%d\n", arr[i]);
    printArr(arr, n, ++i);
}

// Another approach
void print(int *arr, int n)
{
    if (n == 0) return;
    print(arr, --n);
    printf("%d\n", arr[n]);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Approach 1:\n");
    printArr(arr, n, 0);
    printf("\nApproach 2:\n");
    print(arr, n);

    return 0;
}