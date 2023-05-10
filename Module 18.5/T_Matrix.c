#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    
    int primary = 0;
    int secondary = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                primary += arr[i][j];
            if ((i+j) == (n-1))
                secondary += arr[i][j];
        }
    }
    printf("%d\n", abs(primary-secondary));

    return 0;
}