#include <stdio.h>
#include <string.h>

int main()
{
    char a[11], b[11];
    int lenA, lenB;

    scanf("%s %s", &a, &b);
    lenA = strlen(a);
    lenB = strlen(b);

    printf("%d %d\n", lenA, lenB);
    printf("%s%s\n", a, b);
    int temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s\n", a, b);

    return 0;
}