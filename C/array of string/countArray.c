#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int m;
    scanf("%d", &m);
    

    int arr2[m];

    for (int i = 0; i <= m; i++)
    {
        arr2[i] = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                arr2[i]++;
            }
        }
    }

    for (int i = 0; i <= m; i++)
    {
        printf("%d - %d\n", i, arr2[i]);
    }

    return 0;
}