#include<stdio.h>
int main() {
    int i;
    int sum = 0;

    // for (i = 0; i <= 100; i++) {
    //     printf("%d\n", i);
    //     sum += i;    
    // }

    for (i = 0; i <= 50; i++) {


        if(i == 14) {
            continue;
        }
        
        if(i % 2 == 0) {
            printf("%d - Even\n", i);
        } 
        else {
            printf("%d - Odd\n", i);
        }

        
        
        if (i == 30) {
            break;
        }
    }

    // printf("Sum = %d\n", sum);

    return 0;
}