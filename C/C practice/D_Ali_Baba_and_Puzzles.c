#include <stdio.h>
int main () {

    int num1, num2, num3, num4;

    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if(num1 + num2 - num3 == num4) {
        printf("YES\n");
    }
    else if (num1 + num2 * num3 == num4) {
        printf("YES\n");
    }
    else if (num1 - num2 + num3 == num4) {
        printf("YES\n");
    }
    else if (num1 * num2 + num3 == num4) {
        printf("YES\n");
    }
    else if (num1 * num2 - num3 == num4) {
        printf("YES\n");
    }
    else if (num1 - num2 * num3 == num4) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}