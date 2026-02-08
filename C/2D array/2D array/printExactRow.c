

#include <stdio.h>
int main()
{

    int col, row;
    scanf("%d %d", &row, &col);
    int arr[row][col];

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int c;

    scanf("%d", &c);
    // if (c > col)
    // {
    //     printf("Invalid col num");
    // }
    
    if (c > row)
    {
        printf("Invalid row num");
    }
    else
    {

        printf("\n Output: \n");

        // print a row
        // for (int i = 0; i < col; i++)
        // {
        //     printf("%d ", arr[c][i]);
        // }
        
        // print a col
        for (int i = 0; i < row; i++)
        {
            printf("%d ", arr[i][c]);
        }
    }

    return 0;
}