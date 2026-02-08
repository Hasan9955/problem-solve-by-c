#include <stdio.h>
int main () {

    int n;

    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int pos = 0; 

 

    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            arr[pos] = arr[i];
            pos++;
        }
    }

    for(int i = pos; i < n; i++){
        arr[i] = 0;
    }
    

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    
    return 0;
}




// int main () {

//     int n;

//     scanf("%d", &n);

//     int arr[n];

//     for(int i = 0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }
 

//     for(int i = 0; i < n; i++){

//         for(int j = i + 1; j < n; j++){
//             if(arr[i] == 0){
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     for(int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

    
//     return 0;
// }