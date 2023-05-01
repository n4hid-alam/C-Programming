#include <stdio.h>

int main()
{
    int n, spc, str;
    scanf("%d", &n);

    spc = n-1;
    str = 1;
    for (int i = 1; i <= n*2; i++) {
        for (int j = 1; j <= spc; j++) {
            printf(" ");
        }
        for (int k = 1; k <= str; k++) {
            printf("*");
        }
        printf("\n");
        if (i < n) {
            spc--;
            str += 2;
        }
        else if (i > n) {
            spc++;
            str -= 2;
        }
    }

    return 0;
}