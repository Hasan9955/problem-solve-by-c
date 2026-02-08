#include <stdio.h>
int main( ) {


    char a;

    printf("Input alphabetic character: ");
    scanf("%c", &a); 
    
    if(a >= 'A' && a <= 'Z'){
        // printf("%c is uppercase\n", a); 
        a = a + 32;
        // printf("lowercase is %c\n", a);
        printf("%c", a);
    } else if (a >= 'a' && a <= 'z'){
        // printf("%c is lowercase\n", a);
        a = a - 32;
        // printf("uppercase is %c\n", a);
        printf("%c", a);
    } 
    // else {
    //     printf("%c is not an alphabetic character\n", a);
    // }
 
    return 0;
}