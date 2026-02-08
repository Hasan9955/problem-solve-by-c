#include <stdio.h>
#include <string.h>

int main()
{

    char a[1000];
    scanf("%s", a);

    int arr[26] = {0};

    for (int j = 0; j < strlen(a); j++)
    {
        // if(arr[i] == a[j] - 97){
        //     arr[i]++;
        // }
        int index = a[j] - 97;
        arr[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i + 97, arr[i]);
    }

    return 0;
}