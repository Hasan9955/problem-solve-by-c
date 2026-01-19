#include <stdio.h>
int main() {

    int a;
    printf("Enter value of a: ");
    scanf("%d", &a);

    if(a >= 100 ){
        printf("Burger khabo");
    } 
    else if (a >= 50) {
        printf("Pizza khabo");
    }
    else{
        printf("Kichu khabo na");
    }

    return 0;


}