#include <stdio.h>

int main()
{
    int n, spc, str;
    scanf("%d", &n);

    spc = 0;
    str = n + (n-1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= spc; j++) {
            printf(" ");
        }
        for (int k = 1; k <= str; k++) {
            printf("*");
        }
        printf("\n");
        spc++;
        str -= 2;
    }

    return 0;
}