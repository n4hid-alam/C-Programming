#include <stdio.h>

int main()
{
    int n, spc, str;
    scanf("%d", &n);

    spc = n;
    str = 1;
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= spc; k++) {
            printf(" ");
        }
        for (int j = 1; j <= str; j++) {
            printf("*");
        }
        printf("\n");
        spc--;
        str++;
    }

    return 0;
}