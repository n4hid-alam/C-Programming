/*
...
You need to take one integer value as input and tell 
if the value is positive or negative or zero.
...
*/


#include <stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    if (num > 0) {
        printf("positive\n");
    }
    else if (num < 0) {
        printf("negative\n");
    }
    else {
        printf("zero\n");
    }

    return 0;
}