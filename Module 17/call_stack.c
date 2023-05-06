#include <stdio.h>

void world ()
{
    printf("World function starts!\n");
    printf("World function ends!\n");
}

void hello ()
{
    printf("hello function starts\n");
    world();
    printf("hello function ends\n");
}

int main()
{
    printf("main function starts\n");
    hello();
    printf("main function ends\n");

    return 0;
}