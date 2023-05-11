#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int spc = n-1;
    int p = 0;
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < spc; j++)
            printf(" ");

        for (int k = 0; k <= p; k++)
            if (i % 2 == 0)
                printf("^");
            else
                printf("*");
        printf("\n");
        spc--;
        p += 2;
    }

    return 0;
}