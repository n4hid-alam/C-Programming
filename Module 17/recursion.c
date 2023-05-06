/*
.................recursion.......................
recursion functions are those function who calls itself.
........................................................
*/

#include <stdio.h>

// This fun() function will run until the stack allocated for 
// program  become full. fun() calls itself ,, there is no return
// for this function. it will work like an infinite loop. this 
// not gonna stop until stack memory become full. this program will
// crash automatically
void fun ()
{
    printf("fun\n");
    fun();
}

int main()
{
    fun();

    return 0;
}