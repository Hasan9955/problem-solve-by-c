#include <stdio.h>

int main() {
    int a , b, c;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Enter value of c: ");
    scanf("%d", &c);


    if (a > b) {
        if(a > c) {
            printf("a is greater than b and c\n");
        } else if (b > c) {
            printf("b is greater than a and c\n");
        } else {
            printf("c is greater than a and b\n");
        }
    } 
    else if (a == b) {
        if(a > c) {
            printf("a is greater than b and c\n");
        } if (a == c) {
            printf("All numbers are equal\n");
        }
    }
    else if (b > c) {
        printf("b is greater than a and c\n");
    } 
    else if (b == c) {
        printf("b and c are equal and greater than a\n");
    }
    else {
        printf("c is greater than a and b\n");
    }

    return 0;
}