#include <stdio.h>
#include <string.h>

int main () {

    char A[100], B[100];

    scanf("%s %s", A, B);

    int result = strcmp(A, B);


    // printf("%d", result);
    if(result = 0) printf("A and B are same");
    else if (result > 0) printf("A is greater than B");
    else printf("B is greater than A");

    return 0;
}