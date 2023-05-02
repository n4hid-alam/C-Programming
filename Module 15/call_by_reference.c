/*
    in call by reference--
    we actually sent the variable itself. so variable of main
    function and called function are same. their memory address
    are same. changin value in any function affect the variable.
*/

#include <stdio.h>

void func (int *p) // from main function ,, address of variable send,,only pointer can
{                  // store address, so parameter of this function is pointer
    printf("\n(func)value of p (address of x variable): %p\n", p);
    printf("dereferencing p: %d\n", *p);
    
    // changing the value of p --> value of x will be change bcz here we access the address 
    // and changing value of that address store
    *p = 70;
    printf("(func) value of x: %d\n", *p);
}

int main()
{
    int x = 10;
    printf("(main)value of x: %d\n", x);
    printf("address of x: %p\n", &x);
    func(&x); // sending address of x (&x);
    printf("\n(main)value of x: %d\n", x); // value of x changed

    return 0;
}