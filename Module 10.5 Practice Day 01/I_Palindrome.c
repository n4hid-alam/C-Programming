#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
    int len, i, j;

    scanf("%s", &str);
    len = strlen(str);
    i = 0;
    j = len-1;

    while (i < j) {
        if (str[i] != str[j]) {
            printf("NO\n");
            return 0;
        }
        i++;
        j--;
    }
    printf("YES\n");

    return 0;
}