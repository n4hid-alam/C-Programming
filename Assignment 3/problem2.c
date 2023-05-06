#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int spc = n-1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= spc; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("%d", i);
        }
        printf("\n");
        spc--;
    }

    return 0;
}