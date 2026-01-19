#include <stdio.h>
int main () {

    int n;
    int a;
    int div;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        scanf("%d", &a);


        while (a != 0 ) { 
            printf("%d ", a % 10);
            a = a / 10;
        } 
        printf("\n");
        
    }

    return 0;
}