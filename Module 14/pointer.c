#include <stdio.h>

int main()
{
    int x = 10;
    printf("address of x: %p\n", &x);
    int* p = &x;
    printf("Value of p: %p\n", p);
    // dereferrence of p
    printf("content of p: %d\n", *p);

    // change value using pointer
    *p = 20;
    printf("*p : %d\n", *p);
    printf("x: %d\n", x);
}