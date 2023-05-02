#include <stdio.h>

int main()
{
    int x = 10;
    int* ptr = &x;
    int* ptr2 = ptr;
    int* ptr3 = &ptr;

    printf("value of x: %d\n", x);
    printf("address of x: %p\n", &x);
    printf("value of ptr: %p\n", ptr);
    printf("address of ptr: %p\n", &ptr);
    printf("value of ptr2: %p\n", ptr2);
    printf("address of ptr2: %p\n", &ptr2);
    printf("value of ptr3: %p\n", ptr3);
    printf("address of ptr3: %p\n\ndereferencing:\n", &ptr3);

    // dereferencing
    printf("deferencing ptr: %d\n", *ptr);
    printf("dereferencing ptr2: %d\n", *ptr2);
    printf("dereferencing ptr3: %p\n", *ptr3);


    // changing value of x
    printf("\n\nchanging value of x:\n");
    *ptr = 100;
    printf("value of x: %d\n", x);
    printf("dereferencing ptr: %d\n", *ptr);
    printf("dereferencing ptr2: %d\n", *ptr2);

    *ptr2 = 1000;
    printf("\nvalue of x: %d\n", x);
    printf("dereferencing ptr: %d\n", *ptr);
    printf("dereferencing ptr2: %d\n", *ptr2);

    return 0;
}