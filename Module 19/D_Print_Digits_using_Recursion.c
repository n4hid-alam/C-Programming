#include <stdio.h>

void print_digit (int n)
{
    if (n == 0)
        return;
    int x = n % 10;
    print_digit (n/10);
    printf("%d ", x);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        print_digit(n);
        printf("\n");
    }

    return 0;
}