#include <stdio.h>

int vowel_count (char *s, int i)
{
    int count = 0;
    if (s[i] == '\0') 
        return 0;

    if (s[i] >= 'A' && s[i] <= 'Z') 
        s[i] += 32;

    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') 
        return ++count + vowel_count(s, ++i);
    else 
        return 0 + vowel_count(s, ++i);
}

int main()
{
    char s[205];

    fgets(s, 205, stdin);
    printf("%d\n", vowel_count (s, 0));

    return 0;
}