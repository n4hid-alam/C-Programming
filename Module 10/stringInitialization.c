/*
    While initializing a string we must take 1 extra size
    because compiler automatically put an NULL character to that
    string ; ex: "nahid\0" --> NULL -> '\0'

    if we use use 3rd and 4th way for initializing we don't need to
    define extra size, compiler automatically do that
*/
#include <stdio.h>

int main()
{
    // first way (not standard);
    char str[6] = {'N', 'a', 'h', 'i', 'd'};
    // second way (standard)
    char str2[5] = "Nahid";
    //third way (without defining size)
    char str3[] = {'N', 'a', 'h', 'i', 'd'};
    // fourth way (without defining size)
    char str4[] = "Nahid";
    for (int i = 0; i < 5; i++)
        printf("%c", str4[i]);
}