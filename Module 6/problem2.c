/* 
    Title :  Even, Odd, Positive and Negative
    Link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
*/

#include <stdio.h>

int main()
{
	int n;
	int even, odd;
	int neg, pos;
	scanf("%d", &n);
	even = odd = neg = pos = 0;

	for (int i = 0; i < n; i++) {
		int temp;
		scanf("%d", &temp);
		if (temp % 2 == 0 || temp == 0) even++;
		else odd++;
		
		if (temp < 0) neg++;
		else if (temp > 0) pos++;
	}
	
	printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, pos, neg);
	
	return 0;
}