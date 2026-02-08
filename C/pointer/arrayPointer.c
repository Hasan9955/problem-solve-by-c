#include <stdio.h>
int main () {

    int num[10] = { 10, 20, 30, 40, 50 };

    printf("array address: %p\n", num);
    printf("%d\n", num[1]);
    printf("%d\n", 1[num]);
    printf("%d\n", *(num+1));
    printf("%d\n", *(1+num));


    return 0;
}