#include <stdio.h>


void fun (int *p) {

    *p = 100;

}


int main () {

    int x = 50;

    fun(&x);

    printf("%d", x);
    
    return 0;
}