#include <stdio.h>

char small_to_capital (char c)
{
    return (c-32);
}

int main()
{
    char c;
    scanf("%c", &c);

    c = small_to_capital(c);
    printf("%c\n", c);

    return 0;
}