#include <stdio.h>
#include <string.h>

int main()
{
    char c;
    int cap, small, spc;

    cap = small = spc = 0;

    while (scanf("%c", &c) != EOF) {
        if (c >= 'a' && c <= 'z')
            small++;
        else if (c >= 'A' && c <= 'Z')
            cap++;
        else if (c == ' ')
            spc++;
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d\n", cap, small, spc);

    return 0;
}