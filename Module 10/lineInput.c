#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    // first way (not standard)
    gets(str);
    printf("%s\n", str);

    // second way (standard)
    // fgets (name, size_with_null, stdin)
    char str2[16];
    fgets(str2, 16, stdin);
    printf("%s", str2);
}