



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    
//     int i;
    // For loop
    // for (i = 1; i <= 10; i++) {
    //     printf("%d\n", i);
    // }

    // While loop
    // i = 1; 
    // while (i <= 10) {
    //     printf("%d\n", i);
    //     i++;
    // }

    // Do while loop
    // i = 1;
    // do {
    //     printf("%d\n", i);
    //     i++;
    // }
    // while (i <= 10);

    
    int a;
    int i;
    long c;
    scanf("%d", &a);
     if(a < 0) {
        printf("please enter a positive number");
        return 0;
    }
    
    for(i = 1; i <= a; i ++) {
        printf("I Love Practice");
    }

    int A;
    long B;
    float C;
    char D;
    
    scanf("%d\n", &A);
    scanf("%ld\n", &B);
    scanf("%f\n", &C);
    scanf("%c\n", &D);
    
    printf("%d\n", A);
    printf("%dl\n", B);
    printf("%f\n", C);
    printf("%c\n", D);
    
    printf("Hello, world! I am learning C programming language. ^^_^^\nProgramming is fun and challenging. /\\/\\/\\ \nI want to give my 100% dedication to learn!\tI will succeed one day."); 
    
    return 0;
}
