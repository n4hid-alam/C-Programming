#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int count[1000] = {0};

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        count[arr[i]]++;
    }
    int x;
    scanf("%d", &x);

    printf("%d\n", count[x]);

    return 0;
}