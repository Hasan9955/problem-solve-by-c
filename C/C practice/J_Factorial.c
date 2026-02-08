#include <stdio.h>

long long int fun(long long int n)
{

    if (n == 0)
    {
        return 1;
    }

    long long int res = fun(n - 1);
    return res * n;
}

int main()
{

    int n;

    scanf("%d", &n);

    long long int result = fun(n);

    printf("%lld", result);

    return 0;
}