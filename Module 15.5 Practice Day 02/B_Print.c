#include <stdio.h>

void print (int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d", i+1);
        if (i < n-1)
            printf(" ");
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    print (n);

    return 0;
}