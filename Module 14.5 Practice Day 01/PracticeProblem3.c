#include <stdio.h>

void charTOascii (char c) 
{
    printf("%d\n", c);
}

int main()
{
    char c;
    scanf("%c", &c);

    charTOascii (c);

    return 0;
}