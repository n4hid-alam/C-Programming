#include <stdio.h>

int main()
{
    int m1, m2, d;
    scanf("%d %d %d", &m1, &m2, &d);
    int ans = 0;

    ans = (m1 * d) / m2;
    printf("%d\n", ans);

    return 0;
}