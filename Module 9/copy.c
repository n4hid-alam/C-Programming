#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int m;
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    int arr[m + n];
    for (int i = 0; i < n; i++)
        arr[i] = a[i];
    int i = n;
    for (int j = 0; j < m; j++, i++)
        arr[i] = b[j];

    for (i = 0; i < m + n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}