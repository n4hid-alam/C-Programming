#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int pos;
    scanf("%d", &pos);
    for (int i = pos; i < n; i++)
        arr[i] = arr[i + 1];
    n--;
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}