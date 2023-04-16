#include <stdio.h>
#include <string.h>

int main()
{
    char str[11];
    scanf("%s", &str);

    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        count += str[i] - '0';
    }
    printf("%d\n", count);

    return 0;
}