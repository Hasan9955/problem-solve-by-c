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

    int flag = 0;

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            if (i == j || (i + j + 1) == row)
            {
                if (arr[i][j] == 1)
                {
                    continue;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            // else if ((i + j + 1) == row)
            // {
            //     if (arr[i][j] == 1)
            //     {
            //         continue;
            //     }
            //     else
            //     {
            //         flag = 1;
            //         break;
            //     }
            // }
            else
            {
                if (arr[i][j] != 0)
                {
                    flag = 1;
                    break;
                }
            }
        }
    }

    if (row != col)
    {
        printf("NO");
    }
    else if (flag == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}