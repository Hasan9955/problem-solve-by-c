#include <stdio.h>


int main()
{

    int n, m;

    scanf("%d %d", &n, &m);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int count[100000] = {0}; 

    for (int j = 0; j < n; j++)
    {
        count[array[j]]++;
    }
     

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}