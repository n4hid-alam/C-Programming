#include <stdio.h>

int main()
{
    int n, s, p;
    scanf("%d", &n);
    s = n-1;
    p = 1;
    for (int i = 1; i <= n*2; i++) {
        for (int j = 1; j <= s; j++) {
            printf(" ");
        }
        for (int k = 1; k <= p; k++) {
            printf("*");
        }
        printf("\n");
        if (i <= n-1) {
            s--;
            p += 2;
        }
        else {
            s++;
            p -= 2;
        }
    }

    // s = 1;
    // p -= 4;

    // for (int i = 1; i <= n-1; i++) {
    //     for (int j = 1; j <= s; j++) {
    //         printf(" ");
    //     }
    //     for (int k = 1; k <= p; k++) {
    //         printf("*");
    //     }
    //     printf("\n");
    //     s++;
    //     p -= 2;
    // }

    return 0;
}