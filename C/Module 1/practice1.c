#include <stdio.h>
int main () {
    // printf("\"Recently I heard that you've achieved 95%% marks in your exam.\nThis is brilliant! \nI wish you'll shine in your life!\tGood luck with all the barriers(/\\) in your life.\"");


    // float a, b;

    // printf("Enter value of a: "); scanf("%f", &a);
    
    // printf("Enter value of b: "); scanf("%f", &b);

    // printf("Sum of a and b is: %0.0f \n", a + b);

    // printf("Addition of a and b is: %0.0f\n", a - b);

    // printf("Multiplication of a and b is: %0.0f\n", a * b);

    // printf("Division of a and b is: %0.2f\n", a / b);


    // check even or odd.
    // int a;

    // printf("Enter a number: "); scanf("%d", &a);
    // if(a <= 0){
    //     printf("Please enter a positive number\n");
    //     return 0;
    // }

    // if(a % 2 == 0){
    //     printf("%d is an even number\n", a);
    // }
    // else{
    //     printf("%d is an odd number\n", a);
    // }

    // int a;

    // printf("Enter value of a: "); scanf("%d", &a);

    // if(a > 0){
    //     printf("%d is a positive number\n", a);
    // }
    // else if (a < 0) {
    //     printf("%d is a negative number\n", a);
    // }
    // else {
    //     printf("zero\n");
    // }


    int a;

    printf("Enter value of a: "); scanf("%d", &a);

    if(a >= 10000) {
        printf("Buy Gucci Bag\n");
        if(a > 20000) {
            printf("Buy Gucci Belt\n");
        }
    }
    else if(a >= 5000) {
        printf("Buy  Levis Bag\n");
    }
    else{
        printf("Buy Bag from new market\n");
    }


    return 0;
}

