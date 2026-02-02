#include <stdio.h>


int fun () {

    printf("Hello from fun\n");

    fun();
}


int main () {

    fun();
    return 0;
}