#include <stdio.h>

char capital_to_small (char c)
{
    return (c+32);
}

int main()
{
    char c;
    scanf("%c", &c);

    c = capital_to_small (c);
    printf("%c\n", c);

    return 0;
}