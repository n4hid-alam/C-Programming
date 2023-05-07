/*
    _   _
   |1 0 0|
   |0 1 0|
   |0 0 1|
   --   --  (1,1,1 are on primary diagonal position)

   * must be square (row = col)
   * only store value on diagonal positions 
   * values must be 1 (diagonal position)
   * must be 0 for other positions
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
        printf("not a unit matrix\n");
        return 0;
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i != j) {
                if (arr[i][j] != 0) {
                    printf("not a unit matrix\n");
                    return 0;
                }
            }
            else {
                if (arr[i][j] != 1) {
                    printf("Not unit matrix\n");
                    return 0;
                }
            }
        }
    }
    printf("unit matrix\n");

    return 0;
}