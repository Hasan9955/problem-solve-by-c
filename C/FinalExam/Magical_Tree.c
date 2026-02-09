#include <stdio.h>

int main()
{

    int n;

    scanf("%d", &n);

    int triangleRow = ((n + 1) / 2) + 5;

    
    int star = 1;
    int space = ((triangleRow * 2) - 1) / 2;
    
    // printf("%d\n", triangleRow);
    // printf("%d", space);
    // print triangle pattern
    for(int i = 0; i < triangleRow; i++){

        for(int j = 0; j < space; j++){
            printf(" ");
        }

        for(int k = 0; k < star; k++){
            printf("*");
        }

        printf("\n");

        star += 2;
        space--;
    }


    // space = ((triangleRow * 2) - 1) / 2;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf(" ");
        }

        for(int k = 0; k < n; k++){
            printf("*");
        }

        printf("\n");
    }

    return 0;
}