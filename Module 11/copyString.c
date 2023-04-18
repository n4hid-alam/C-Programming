#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];

    scanf("%s %s", a, b); // in case of string use of & is not mandatory

    // copying b into a using loop
    for (int i = 0; i <= strlen(b); i++)
        a[i] = b[i];
    printf("%s %s\n", a, b);
    scanf("%s %s", a, b);

    // copying b into a using built-in function "strcpy"
    strcpy(a, b);
    printf("%s %s\n", a, b);

    return 0;
}