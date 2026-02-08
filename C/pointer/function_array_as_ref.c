#include <stdio.h> 
int fun2()

{
    int ary[4] = {1, 2, 3, 4};

    printf("%d\n", *ary);
}

#include <stdio.h>
int fun3()
{

    int ary[4] = {1, 2, 3, 4};

    int *p;

    p = ary + 3;

    *p = 5;

    printf("%d\n", ary[3]);

}



int fun(int *arr, int n, int num)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    arr[0] = 50000;

    num = 55;

    printf("\n");
    printf("%d", num);
    printf("\n");
}

int main()
{
fun2();
fun3();
    int num = 77;

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    fun(arr, 10, num);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n %d", num);

    return 0;
}

