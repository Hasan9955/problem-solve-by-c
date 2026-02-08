#include <stdio.h>
int main() 
{
    int a = 1000000000;
    long long int b = 10000000000000;
    printf("Value of a: %d\n", a);
    printf("value of b: %lld\n", b);


    //max 10 digits
    float c = 2005.5556666632255456566;
    printf("value of c: %0.6f\n", c);

    // max 15 digits
    double d = 2005.555565545645648789789;
    printf("value of d: %0.12lf", d);
    
    return 0;
}