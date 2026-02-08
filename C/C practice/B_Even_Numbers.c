#include <stdio.h>
int main()
{

    int i = 1;
    int n;
    scanf("%d", &n);

    if (n == 1)
    {
        printf("%d\n", -1);
    }
    else
    {
        while (i <= n)
        {
            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }
            i++;
        }
    }
    return 0;
}