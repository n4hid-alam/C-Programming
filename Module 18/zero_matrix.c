/*
     __    __
    | 0   0  |
    | 0   0  |
    | 0   0  |
    |_0   0__| 
    // all elements are zer0
*/

#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int element = row * col;
    int arr[row][col];

    for (int i = 0; i < row; i++) 
        for (int j = 0; j < col; j++)
            scanf("%d", &arr[i][j]);
    int count = 0;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            if (arr[i][j] == 0)
                count++;
    if (count == element)
        printf("Zero Matrix\n");
    else
        printf("Not zero matrix\n");
    
    return 0;
}