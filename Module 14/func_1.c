// return + parameter

#include <stdio.h>

int sum (int a, int b)
{
    int total;

    total = a + b;

    return total;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int total = sum (a, b);
    printf("%d\n", total);

    return 0;
}