// using condition with for loop
#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    // this will print from 1 to n and
    // define which one odd and which one even
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d - even\n", i);
        }
        else {
            printf("%d - odd\n", i);
        }
    }

    return 0;
}