#include <stdio.h>

int main()
{

    long long int n;

    scanf("%lld", &n);

    for (int i = 0; i < n; i++)
    {

        long long int mult, a, b, c;
        scanf("%lld %lld %lld %lld", &mult, &a, &b, &c);

        long long int mult3num = a * b * c;

        if (mult == 0)
        {
            printf("%d\n", 0);
        }

        else if (mult3num > mult)
        {
            printf("%d\n", -1);
        }

        else
        {
            long long int d = mult / mult3num;

            if (a * b * c * d == mult)
            {
                printf("%lld\n", d);
            }
            else
            {
                printf("%d\n", -1);
            }
        }
    }
    return 0;
}