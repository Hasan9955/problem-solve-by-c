#include <stdio.h>
int main()
{

    int row, col;

    scanf("%d %d", &row, &col);

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // print last row
    for (int i = row - 1; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            printf("%d", arr[i][j]);
            if(j + 1 < col){
                printf(" ");
            }
        }
    }
    printf("\n");

    // print last column
    for (int j = col - 1; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            printf("%d", arr[i][j]);
            if(i + 1 < row){
                printf(" ");
            }
        }
    }



    return 0;
}