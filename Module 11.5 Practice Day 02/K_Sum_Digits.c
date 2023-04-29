#include <stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    char s[n];
    scanf("%s", &s);

    for (int i = n-1; i >= 0; i--) {
        sum += s[i] - '0';
    }
    printf("%d\n", sum);

    return 0;
}