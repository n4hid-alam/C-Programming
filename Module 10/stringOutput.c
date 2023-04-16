#include <stdio.h>

int main()
{
    char str[] = "Nahid";

    // using for loop
    // we don't know the size,,,to find out the size 
    // we can calculate total size of str and then divid by the
    // size of char :: sizeof(str) / sizeof(char)
    int sz = sizeof (str);
    printf("%d\n", sz); // sz value 6 because compiler automatically
                        // put an extra size to input NULL 
    for (int i = 0; i < sz-1; i++) // "sz-1" bcz null cannot be printed
        printf("%c", str[i]);
    printf("\n");

    // without using loop
    // with printf function
    printf("%s\n", str);
}