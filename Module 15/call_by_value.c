/*
    in call by value--
    variable of main function and other function is 
    not same. here we just sent the value of a variable from
    main function , not variable itself. so there's memory address
    are not same. changing the value of a variable in other function
    won't affect in the value of main function's variable.
    in following code we will see it clearly.
*/

#include <stdio.h>

void func (int x)
{
    printf("func:\n");
    printf("value of x: %d\n", x);
    printf("address of x (func): %p\n", &x);
    x = 50;
    printf("value of x after changing in func: %d\n", x);
}

int main()
{
    int x = 10; 

    printf("main:\n");
    printf("value of x: %d\n", x);
    printf("address of x (main): %p\n", &x);
    func(x);

    printf("main:\n");
    printf("value of x in main: %d\n", x);

    return 0;
}