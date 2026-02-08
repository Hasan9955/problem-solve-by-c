#include <stdio.h>
int main()
{

    int n;

    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i == j)
            {
                mainDiagonalSum = mainDiagonalSum + arr[i][j];
            }

            if (i + j == n - 1)
            {
                secondaryDiagonalSum = secondaryDiagonalSum + arr[i][j];
            }
        }
    }

    int ans = mainDiagonalSum - secondaryDiagonalSum;
    if (ans < 0)
    {
        ans = ans * -1;
    }
    printf("%d", ans);

    return 0;
}