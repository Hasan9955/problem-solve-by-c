#include <stdio.h>
#include <string.h>


int main () {

    char arrA[100];
    char arrB[100];


    scanf("%s", arrA);
    scanf("%s", arrB);

    printf("%d %d\n", strlen(arrA), strlen(arrB));

    printf("%s%s\n", arrA, arrB);

    char temp = arrA[0];
    arrA[0] = arrB[0];
    arrB[0] = temp;

    printf("%s %s\n", arrA, arrB);

    return 0;
}