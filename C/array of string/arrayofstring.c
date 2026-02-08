#include <stdio.h>
int main () {

    char a[200];

    scanf("%s", a);
    printf("%s \n", a);
     

    int size = sizeof(a);
    printf("%d", size);
    return 0;
}