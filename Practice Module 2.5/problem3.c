/*
...
You need to take one non-negative integer (0 or greater than 0) value 
as input and tell if it is even or odd.
...
*/


#include <stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    if (num < 0) 
        return 0;

    if (num % 2 == 0) {
        printf("even\n");
    }
    else {
        printf("odd\n");
    }

    return 0;
}