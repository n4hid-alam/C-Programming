/*
    Title : Digits
    Link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q
*/

#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        do {
            printf("%d ", n%10);
            n /= 10;
        } while (n != 0);
        printf("\n");
    }

	return 0;
}