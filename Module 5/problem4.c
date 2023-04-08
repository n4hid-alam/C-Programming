/*
    Title: First digit !
    Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P
*/

#include <stdio.h>

int main()
{
    char a[4];

    scanf("%s", a);
    if ((a[0] - '0') % 2 == 0) {
        printf("EVEN\n");
    }
    else {
        printf("ODD\n");
    }

    return 0;
}