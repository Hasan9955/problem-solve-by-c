#include <stdio.h>

int main() {
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    long long int x = a, y = b, z = c;

    
    if (x > y) {
        long long int temp = x;
        x = y;
        y = temp;
    }

    if (x > z) {
        long long int temp = x;
        x = z;
        z = temp;
    }

    if (y > z) {
        long long int temp = y;
        y = z;
        z = temp;
    }

    
    printf("%lld\n", x);
    printf("%lld\n", y);
    printf("%lld\n", z);

    
    printf("\n");

    
    printf("%lld\n", a);
    printf("%lld\n", b);
    printf("%lld\n", c);

    return 0;
}
