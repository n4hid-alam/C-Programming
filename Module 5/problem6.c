/*
    Title: Max or Min
    Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
*/

#include <stdio.h>

int main()
{
    int a, b, c;
    int min, max;

    scanf("%d %d %d", &a, &b, &c);
    max = min = 0;
    if (a >= b && a >= c) max = a;
    else if (b >= a && b >= c) max = b;
    else max = c;

    if (a <= b && a <= c) min = a;
    else if (b <= a && b <= c) min = b;
    else min = c;

    printf("%d %d\n", min, max);

    return 0;
}