#include <stdio.h>



int fun (long long int n){

    if(n < 2) return 0;
 
    // printf("%d\n", n);
    int res = fun(n/2);
    res++;
    return res;
}

int main () {

    long long int n;

    scanf("%lld", &n);

    int res = fun(n);

    printf("%d", res);
    return 0;
}