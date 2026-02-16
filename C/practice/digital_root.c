#include <stdio.h>

int sum (int n) {

    if(n == 0) return 0;

    int res = sum(n / 10);
    
    return res + (n % 10);

}

int main () {

    int n;
    scanf("%d", &n);


    int res = n;

    while (res > 9){
        res = sum(res);
    };
    


    printf("%d", res);

    return 0;
}