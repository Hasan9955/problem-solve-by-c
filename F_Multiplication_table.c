#include <stdio.h>
int main () {

    int a;
    int mult;

    scanf("%d", &a);

    for(int i = 1; i <= 12; i++) {
        mult = i * a;
        printf("%d * %d = %d\n", a, i, mult);
    }
    return 0;
}