#include <stdio.h>

int main()
{
    char str[100];
    scanf("%s", &str);
    printf("%s\n", str);
    /* here ,, only nahid will be printed, it is because
    whenever scanf found space it thinks that the input process
    is done by the user and put an null character , so remaining 
    character won't take by scanf......we use different techniques and 
    functions to get rid of this problem.....we will dicuss it in
    lineInput.c file*/

    return 0;
}