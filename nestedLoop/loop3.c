#include <stdio.h>
int main()
{

    int n;

    scanf("%d", &n);

    int s = n - 1;
    int k = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = s; j > 0; j--)
        {
            printf(" ");
        }

        for (int j = 0; j < k; j++)
        {
            printf("*");
        }

        printf("\n");

        s--;
        k = k + 2;
    }

    s = 1;
    k = 2 * n - 3;

    for (int i = 0; i < n; i++)
    {

        for (int j = s; j > 0; j--)
        {
            printf(" ");
        }

        for (int j = 0; j < k; j++)
        {
            printf("*");
        }

        printf("\n");

        s++;
        k = k - 2;
    }

    return 0;
}






// more easy version
int main2()
{

    int n, s, k;

    scanf("%d", &n);

    s = n - 1;
    k = 1;
    for (int i = 1; i <= (2 * n)-1; i++)
    {

        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        printf("\n");

        if (i <= n - 1)
        {
            s--;
            k = k + 2;
        }
        else
        {
            s++;
            k = k - 2;
        }
    } 
    return 0;
}