#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    if (n == 1) {
        if (arr[0][0] != 1) {
            printf("NO\n");
            return 0;
        }
        else {
            printf("YES\n");
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                if (arr[i][j] != 1) {
                    printf("NO\n");
                    return 0;
                }
            }
            else {
                if (arr[i][j] != 0) {
                    printf("NO\n");
                    return 0;
                }
            }
        }
    }
    printf("YES\n");

    return 0;
}
