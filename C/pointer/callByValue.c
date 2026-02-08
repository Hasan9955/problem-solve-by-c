#include <stdio.h>

int fun (int x) {
    printf("From fun Address of x: %p \n", x);
    printf("from fun value of x: %d\n", x);
    x = 200;
}

int main () {

    int x = 10;

    fun(x);

    printf("From main address of x: %p\n", x);

    printf("From main value of x: %d\n", x);

    return 0;
}