// no return + no parameter

#include <stdio.h>

void sum (void)
{
    int a, b, total;
    scanf("%d %d", &a, &b);

    total = a + b;
    printf("%d\n", total);

    return;
}

int main()
{
    sum ();

    return 0;
}