#include <stdio.h>

int str_len (char * s, int i)
{
    if (s[i] == '\0') return 0;
    int count = str_len (s, i+1);

    return count+1;
}

int main()
{
    char s[] = "Globalization";
    int len = str_len(s, 0);

    printf("%d\n", len);

    return 0;
}