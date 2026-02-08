#include <stdio.h>
int main () {

    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int smallInt = arr[0];

    for(int i = 0; i<n; i++){
        if(smallInt > arr[i]){
            smallInt = arr[i];
        }
    }

    int count = 0;

    for(int i = 0; i < n; i++){
        if(smallInt == arr[i]){
            count++;
        }
    }

    if(count % 2 == 0){
        printf("Unlucky");
    } else {
        printf("Lucky");
    }
    return 0;
}


 
// int main() {

//     int n;
//     scanf("%d", &n);

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int minValue = arr[0];
//     int count = 1;

//     for (int i = 1; i < n; i++) {
//         if (arr[i] < minValue) {
//             minValue = arr[i];
//             count = 1;          // new minimum found
//         } 
//         else if (arr[i] == minValue) {
//             count++;            // same minimum found
//         }
//     }

//     if (count % 2 == 0) {
//         printf("Unlucky\n");
//     } else {
//         printf("Lucky\n");
//     }

//     return 0;
// }
