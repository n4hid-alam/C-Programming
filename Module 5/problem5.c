/*
    Title: Capital or Small or Digit
    Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
*/

#include <stdio.h>

int main()
{
    char x;

    scanf("%c", &x);

    if (x >= 'a' && x <= 'z') {
        printf("ALPHA\nIS SMALL\n");
    }
    else if (x >= 'A' && x <= 'Z') {
        printf("ALPHA\nIS CAPITAL\n");
    }
    else {
        printf("IS DIGIT\n");
    }

    return 0;
}