/*
    _   _
   |2 0 0|
   |0 2 0|
   |0 0 2|
   --   --  (2,2,2 are on primary diagonal position)

   * must be square (row = col)
   * only store value on diagonal positions 
   * values must be same
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
        printf("not a scaler matrix\n");
        return 0;
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i != j) {
                if (arr[i][j] != 0) {
                    printf("not a scaler matrix\n");
                    return 0;
                }
            }
            else {
                if (arr[i][j] != arr[0][0]) {
                    printf("Not scaler matrix\n");
                    return 0;
                }
            }
        }
    }
    printf("scaler matrix\n");

    return 0;
}