/*
    in c language--
    main function send the address of first index and using 
    that address rest of the values are being figure out.
    function doesn't make a copy it receive address , its call by reference
    . changing values in called function affect the main fuunction
*/

#include <stdio.h>

void func (int *arr, int size) // need to define size bcz there is no other way 
{                                 // to find the size of the array
    printf("func: %d\n", sizeof(arr)/sizeof(int)); // here, showing 1 but the size is 5
                        // it is because , here only first address are send, not the whole array
    for (int i = 0; i < size; i++) 
        printf("%d ", arr[i]);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("main: %d\n", sizeof(arr)/sizeof(int));
    func(arr, 5);
    
    return 0;
}