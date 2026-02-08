#include <stdio.h>



int fun (long long int arr[], int n) {

    // base case 
    if(n < 0) return arr[0];

    long long int res = fun(arr, n - 1);

    if(res < arr[n]){
        return arr[n];
    }

    return res;

}

int main () {

    int n;
    scanf("%d", &n);

    long long int arr[n];


    for(int i =0; i <n; i++){
        scanf("%lld", &arr[i]);
    }

    long long int res = fun(arr, n - 1);

    printf("%lld", res);

    return 0;
}






























// long long int fun (long long int arr[], int n){

//     if(n < 0) return arr[0];

//     long long int res = fun(arr, n - 1);

//     if(arr[n] > res){
//         return arr[n];
//     } 
//     return res;
// }

// int main () {

//     int n;

//     scanf("%d", &n);

//     long long int arr[n];

//     for(int i = 0; i < n; i++){
//         scanf("%lld", &arr[i]);
//     }

//     long long int res = fun(arr, n - 1);

//     printf("%lld", res);
    
//     return 0;
// }