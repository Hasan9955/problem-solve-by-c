#include <stdio.h>


int world() {
    printf("world start \n");

    printf("World end \n");

}


int hello () {

    printf("Hello Start \n");

    world();

    printf("Hello end\n");
}

int main () {


    printf("Main Start\n");

    hello();

    printf("Main End\n");
    return 0;
}