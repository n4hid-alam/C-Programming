#include <stdio.h>

void print (int n)
{
    if (n > 5)
        return;
    printf("%d\n", n);
    ++n;
    print(n);
}

int main()
{
    print(1);

    return 0;
}