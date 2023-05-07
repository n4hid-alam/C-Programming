/*
    _   _
   |0 0 1|
   |0 2 0|
   |3 0 0|
   --   --  (1, 2, 3 are on primary diagonal position)

   * must be square (row = col)
   * only store value on diagonal positions 
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
    
    if (row != col) {
        printf("not a secondary diagonal matrix\n");
        return 0;
    }
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            if (i + j != row-1)
                if (arr[i][j] != 0) {
                    printf("not a secondary diagonal matrix\n");
                    return 0;
                }
    printf("secondary diagonal matrix\n");

    return 0;
}