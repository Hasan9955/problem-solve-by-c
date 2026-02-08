#include <stdio.h>
int main () {

    int n;

    scanf("%d", &n);

    int tens = n / 10;
    int ones = n % 10;
 

    if(tens % ones == 0 || ones % tens == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }


    return 0;
}