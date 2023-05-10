#include <stdio.h>
#include <string.h>

int main()
{
    char s[1005];
    scanf("%s", &s);

    int i = 0;
    int j = strlen(s)-1;

    while (i < j) {
        if (s[i] != s[j]) {
            printf("NO\n");
            return 0;
        }
        i++; j--;
    }
    printf("YES\n");

    return 0;
}