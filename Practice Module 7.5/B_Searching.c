#include <stdio.h>

int main()
{
    int n, pos;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &pos);

    for (int i = 0; i < n; i++) {
        if (arr[i] == pos) {
            printf("%d\n", i);;
            return 0;
        }
    }
    printf("-1\n");

    return 0;
}