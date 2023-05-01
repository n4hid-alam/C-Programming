// no return + parameter

#include <stdio.h>

void sum (int a, int b)
{
    int total;

    total = a + b;
    printf("%d\n", total);

    return;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    sum (a, b);

    return 0;
}