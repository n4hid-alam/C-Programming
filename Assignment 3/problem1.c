#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int spc = n-1;
    int num = 1;
    for (int i = 1; i <= n*2; i++) {
        for (int j = 0; j < spc; j++) {
            printf(" ");
        }
        for (int k = 1; k <= num; k++) {
            printf("%d", k);
        }
        printf("\n");
        if (i < n) {
            spc--;
            num += 2;
        }
        else {
            spc++;
            num -= 2;
        }
    }

    return 0;
}