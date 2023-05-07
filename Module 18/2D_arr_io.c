#include <stdio.h>

int main()
{
    // declare 2d array
    int arr[5][4];

    // taking input
    for (int i = 0; i < 5; i++) {          // for row
        for (int j = 0; j < 4; j++) {     // for column
            scanf("%d", &arr[i][j]);     // i for row, j for col
        }
    }

    // printing values of 2d array
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] --> ", i);
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}