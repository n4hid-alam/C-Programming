// break
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    printf("n = %d\n", n);
    for (int i = 1; i <= n; i++) {
        if (i == n/2) {
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}