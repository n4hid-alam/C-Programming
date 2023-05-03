#include <stdio.h>

int my_len (char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;

    return i;
}

int main()
{
    char s[100];
    scanf("%s", &s);

    printf("%d\n", my_len (s));

    return 0;
}