#include <stdio.h>
#include <string.h>

int main()
{
    char str[100001];
    int len;

    scanf("%s", &str);
    len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] == ',')
            str[i] = ' ';
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        else 
            str[i] += 32;
    }
    printf("%s\n", str);

    return 0;
}