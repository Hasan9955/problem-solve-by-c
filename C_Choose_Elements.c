#include <stdio.h>
int main () {

    int n, k;

    scanf("%d %d", &n, &k);

    long long int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
    }

    for(int i = 0; i< n; i++){
        for(int j = i; j<n; j++){
            if(arr[i] < arr[j]){
                long long int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    long long int sum = 0;

    for(int i = 0; i < k; i++){
        if(arr[i] > 0){
            sum = sum + arr[i];
        }
    }

    printf("%lld", sum);

    return 0;
}












// 
// #include <stdio.h>

// int main() {

//     int n, k;
//     scanf("%d %d", &n, &k);

//     long long arr[n];

//     // Input array
//     for (int i = 0; i < n; i++) {
//         scanf("%lld", &arr[i]);
//     }

//     // Sort array in descending order
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] < arr[j]) {
//                 long long temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     long long sum = 0;

//     // Take at most k positive elements
//     for (int i = 0; i < k; i++) {
//         if (arr[i] <= 0) {
//             break;   // no need to continue
//         }
//         sum += arr[i];
//     }

//     printf("%lld\n", sum);

//     return 0;
// }
