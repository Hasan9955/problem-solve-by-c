#include <stdio.h>
int main () {
    char input;

    printf("Please enter value: ");
    scanf("%c", &input);
 

    if(input >= '0' && input <= '9'){
        printf("IS DIGIT");
    }
    else if(input >= 'A' && input <= 'Z'){
        printf("ALPHA\n");
        printf("IS CAPITAL");
    }
    else if(input >= 'a' && input <= 'z'){
        printf("ALPHA\n");
        printf("IS SMALL");
    }



    return 0;

}