#include <stdio.h>

void fun (int n)
{
    if (n == 0) return;

    printf("%d\n", n);
    fun(--n);
}

int main()
{
    fun(5);

    return 0;
}