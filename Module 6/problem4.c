/*
    Title : Max
    Link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
*/

#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int max = 0;
	for (int i = 0; i < n; i++) {
		int temp;
		scanf("%d", &temp);
		if (temp > max) max = temp;
	}

	printf("%d\n", max);

	return 0;
}