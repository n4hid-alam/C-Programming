#include <stdio.h>

int find_min (int * arr, int n)
{
    int min = arr[0];

    for (int i = 1; i < n; i++) 
        if (arr[i] < min)
            min = arr[i];

    return min;
}

int main()
{
    int n;
    // long long int cnt[100009] = {0};
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        // cnt[arr[i]]++;
    }
    int min = find_min(arr, n);
    int x = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == min) x++;
    if (x % 2 == 0) printf("Unlucky\n");
    else printf("Lucky\n");

    return 0;
}