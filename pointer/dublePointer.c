#include <stdio.h>
int main () {

    double m = 2.5698;

    double *ptr = &m;

    printf("Value of m is: %0.2lf\n", m);
    printf("Value of m by pointer: %0.2lf\n", *ptr);

    printf("size of m: %d\n", sizeof(m));
    printf("size of ptr: %d\n", sizeof(ptr));

    
    return 0;
}