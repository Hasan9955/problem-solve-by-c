#include <stdio.h>

// int fun(int ar[], int n) {
int fun(int *ar, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
}

int main()
{

    int ar[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int size = sizeof(ar) / sizeof(int);

    printf("%d\n", size);

    fun(ar, size);

    return 0;
}