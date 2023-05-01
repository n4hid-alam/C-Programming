// return + no parameter

#include <stdio.h>

int sum () 
{
    int a, b;
    scanf("%d %d", &a, &b);

    int total = a + b;

    return total;
}

int main()
{
    int total = sum();

    printf("%d\n", total);

    return 0;
}