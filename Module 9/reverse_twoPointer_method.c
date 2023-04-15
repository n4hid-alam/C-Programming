// two pointer method
// 10 20 30 40 50
// need two iterator, beginning and ending
// swap values of beginning index and ending index
// until they become equal or greater

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int start = 0, end = n-1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    printf("\n");

    return 0;
}