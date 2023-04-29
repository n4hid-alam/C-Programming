#include <stdio.h>

int main()
{
    char c;
    int vowel = 0;

    while (scanf("%c", &c) != EOF) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            vowel++;
    }
    printf("%d\n", vowel);

    return 0;
}