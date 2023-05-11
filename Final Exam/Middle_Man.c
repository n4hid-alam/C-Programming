#include <stdio.h>

void swap (int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void sortArr (int * arr, int n)
{
    int i, j;

    for (i = 0; i < n-1; i++) {
        int min = i;
        j = i+1;
        while (j < n) {
            if (arr[min] > arr[j])
                min = j;
            j++;
        }
        swap (arr, i, min);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sortArr (arr, n);
    if (n % 2 == 0) {
        int middle1 = (n/2)-1;
        int middle2 = (n/2);
        printf("%d %d\n", arr[middle1], arr[middle2]);
    }
    else {
        int middle = (n)/2;
        printf("%d\n", arr[middle]);
    }

    return 0;
}