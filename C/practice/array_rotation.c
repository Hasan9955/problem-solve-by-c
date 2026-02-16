#include <stdio.h>



int main () {

    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int k; 
    scanf("%d", &k);

    int front = 0;
    int rev = n - 1;

    for(int i = 0; i<k; i++){

        for(int i = n; i > 0; i--){
            int temp = arr[front];
        arr[front] = arr[rev];
        arr[rev] = temp;
        }
        

        front++;
        rev--;

    }

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}