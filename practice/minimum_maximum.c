#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    scanf("%d %d %d", &a, &b, &c);
    // printf("Enter value of a: ");
    // scanf("%d", &a);

    // printf("Enter value of b: ");
    // scanf("%d", &b);

    // printf("Enter value of c: ");
    // scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            // printf("a is Grater then b and c\n");

            if (b > c)
            {
                printf("%d ", c);
            }
            else
            {
                printf("%d ", b);
            }
            printf(" %d", a);
        }
        else if (a == c)
        {
            // printf("a and c are same value and grater then b\n");

            printf("%d ", b);

            printf("%d ", a);
        }
        else
        {
            // printf("c is grater then a and b\n");

            printf("%d ", b);

            printf("%d ", c);
        }
    }
    else if (b > a)
    {
        if (b > c)
        {
            // printf("b is grater then a and c\n");

            if (a > c)
            {
                printf("%d ", c);
            }
            else
            {
                printf("%d ", a);
            }

            printf("%d ", b);
        }
        else if (b == c)
        {
            // printf("b and c are same value and grater then a\n");

            printf("%d ", a);

            printf("%d ", b);
        }
        else
        {
            // printf("C is grater then a and b\n");

            printf("%d ", a);

            printf("%d ", c);
        }
    }
    else if (a == b)
    {
        if (c > a)
        {
            // printf("C is grater. a and b are same value.\n");

            printf("%d ", a);
            printf("%d ", c);
        }
        else if (a == c)
        {
            // printf("a, b and c all are same value\n");
            printf("%d ", a);
        }
        else
        {
            // printf("a and b are same value and grater then c");
            printf("%d ", c);
            printf("%d ", a);
        }
    }
    else
    {
        printf("Last C is grater then a and b");
    }

    return 0;
}