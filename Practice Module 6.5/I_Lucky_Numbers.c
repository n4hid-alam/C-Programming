#include <stdio.h>

int main()
{
    int a, d;
    scanf("%d", &a);

    if (a % 10 == 0) printf("YES\n");
    else {
        d = a % 10;
        a /= 10;
        if (a % d == 0 || d % a == 0) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}