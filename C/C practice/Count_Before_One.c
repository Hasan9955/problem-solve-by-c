// You will be given an array A and the size of that array N. Take input in the main function. You need to write a function named count_before_one() which receives that array of integers and the size of that array and return type will be integer. The function counts the number of elements in that array until you find 1 and returns that count. Print that count in the main function.

#include <stdio.h>

int count_before_one(int arr[], int n)
{

    int count = 0;

    for (int i = 0; i < n; i++)
    { 
        if (arr[i] == 1)
        {
            break;
        }
        else
        {
            count++;
        }
    }
 

    return count;
}

int main()
{

    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int res = count_before_one(arr, n);

    printf("%d", res);

    return 0;
}