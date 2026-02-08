#include <stdio.h>
#include <string.h>



void fun(char arr[]) {

    printf("%d \n", strlen(arr));

    printf("%s\n", arr);

}


int main () {

    char arr[20] = "Hello";

    fun(arr);


    return 0;
}