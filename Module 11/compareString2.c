/*
    compare two string using built-in function
    strcmp(string_1, string_2);
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    int check = strcmp(a, b);
    if (check > 0) {
        printf("A is greater than B\n");
    }
    else if (check < 0) {
        printf("A is less than B\n");
    }
    else {
        printf("Both are same\n");
    }

    return 0;
}