#include <stdio.h>
int main () {

    int x = 100;

    int *ptr = &x;

    printf("X er value: %d\n", x);
    
    printf("X ar address: %p\n", &x);

    printf("ptr er value: %p\n", ptr);

    printf("ptr er address: %p\n", &ptr);

    // printf("ptr er memory size: %d\n", sizeof(ptr));


    printf("X er value from pointer: %d\n", *ptr);
    
    *ptr = 200;
    
    printf("new X er value from pointer: %d\n", *ptr);

    return 0;
}