#include <stdio.h>


long long fun (long long arr[], int n, long long sum) {

    if(n < 0) return sum;

    sum = arr[n] + sum;
    
    return fun(arr, n - 1, sum);

}


int main () {

    int n;
    
    scanf("%d", &n);
    long long arr[n];

    for(int i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
    }

    long long sum = 0;

    long long res = fun(arr, n - 1, sum);


    printf("%lld", res);


    return 0;
}