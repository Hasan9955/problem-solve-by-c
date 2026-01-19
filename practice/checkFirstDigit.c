#include <stdio.h>

int main () {
    
    long long x;
    // printf("Enter value of x: ");
    scanf("%lld", &x);

    
    // printf("Your number is: %lld\n", x);

    while(x >= 10){
        x /= 10;
    }

    // printf("First digit is: %lld\n", x);

    if(x % 2 == 0){
        printf("EVEN");
    } else {
        printf("ODD");
    }


    return 0;
}