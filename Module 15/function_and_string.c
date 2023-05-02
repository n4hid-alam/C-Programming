/*
    string is like array...it also use call by reference method
    . only diff is ,, here we don't need to send the size or length
    bcz we can figure out easily because there have null character in 
    the last of string... 
*/

#include <stdio.h>
#include <string.h>

void func (char *s)
{
    printf("(func) size : %d\n", sizeof(s));
    printf("(FUNC):  %s\n", s);
    s[1] = 'F';
    printf("(FUNC):  %s\n", s);
}

int main()
{
    char s[] = "Hello";
    printf("(main) size : %d\n", sizeof(s));
    printf("(main) %s\n", s);
    func(s);
    printf("(main) %s\n", s);
}