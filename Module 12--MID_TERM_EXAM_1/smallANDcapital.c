#include <stdio.h>

int main()
{
    char c;
    int uppr, lwr;

    uppr = lwr = 0;
    while (scanf("%c", &c) != EOF) {
        if (c >= 'A' && c <= 'Z')
            uppr++;
        else if (c >= 'a' && c <= 'z')
            lwr++;
    }
    printf("%d %d\n", uppr, lwr);

    return 0;
}