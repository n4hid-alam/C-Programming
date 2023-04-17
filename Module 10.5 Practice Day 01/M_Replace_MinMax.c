#include <stdio.h>

int findMinPos(int arr[], int sz)
{
    int min = arr[0];
    int pos = 0;
    for (int i = 1; i < sz; i++)
        if (min > arr[i]) {
            min = arr[i];
            pos = i;
        }
    
    return pos;
}

int findMaxPos (int arr[], int sz)
{
    int max = arr[0];
    int pos = 0;

    for (int i = 1; i < sz; i++) 
        if (max < arr[i]) {
            max = arr[i];
            pos = i;
        }
    
    return pos;
}

void swap (int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main()
{
    int n, min, max;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
    min = findMinPos (arr, n);
    max = findMaxPos (arr, n);
    swap (arr, min, max);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

