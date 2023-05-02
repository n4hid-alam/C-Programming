/*
    --> Array
    name of array itself a pointer. it points the address of first index
    like, arr[5] = {10, 20, 30, 40, 50};
    here 'arr' means &arr[0] ,,, address of arr[0]
    that means ,, name of an array store the address of first index then 
    they access other index. 
    --- accessing way of indexes
    1. arr[0], arr[1]... etc
    2. 1[arr], 2[arr]... etc
    3. *(arr+0), *(arr+1)... etc
    4. *(0+arr), *(1+arr)... etc

    1 and 3 are same &&& 2 and 4 are same
    arr[0] --> first take "arr", then add '+' and then 0 and then dereference whole 
    1[arr] --> first take 1 then + and then arr,, then deference the whole
*/


#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    printf("address of arr[0]: %p\n", &arr[0]);
    printf("value of arr: %p\n", arr);
    printf("address of arr: %p\n", &arr);

    // accessing value
    printf("\n");
    printf("value of 0th index(arr[0]): %d\n", arr[0]);
    printf("value of 0th index(*(arr+0)): %d\n", *(arr+0));
    printf("value of 0th index(0[arr]): %d\n", 0[arr]);
    printf("value of 0th index(*(0+arr)): %d\n", *(0+arr));
    return 0;
}