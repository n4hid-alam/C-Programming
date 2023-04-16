#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", &str);

    // using built in function
    int len = strlen(str);
    printf("%d\n", len);

    // using loop
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    printf("%d\n", count);
}