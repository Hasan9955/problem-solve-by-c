#include <stdio.h>

int sum () {
    int s = 200;

    printf("memory address of s: %p\n ", &s);

    return 0;

}


int main () {

    int s = 100;

    printf("Memory address of s: %p\n", &s);

    sum();


    return 0;
}