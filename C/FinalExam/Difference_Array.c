#include <stdio.h>
#include <stdlib.h>


int main () {

    int n;

    scanf("%d", &n);

    for(int p = 0; p < n; p++){

        int a;
        scanf("%d", &a);

        int arr[a];
        int revArr[a];
        

        for(int j = 0; j < a; j++){
            scanf("%d", &arr[j]);
            revArr[j] = arr[j];
        }


        // for(int i = 0; i < a; i++){
        //     revArr[i] = arr[i];
        // }

        for(int k = 0; k < a; k++){ 
            for(int l = k + 1; l < a; l++){
                if(revArr[k] > revArr[l]){
                    int temp = revArr[k];
                    revArr[k] = revArr[l];
                    revArr[l] = temp;
                }
            }
        }

        int newArr[a];

        for(int i = 0; i < a; i++){
            // printf("%d - %d \n", arr[i], revArr[i]);
            newArr[i] = abs(arr[i] - revArr[i]);
        }

        for(int i = 0; i<a; i++){
            printf("%d", newArr[i]);
            if(i+1 < a){
                printf(" ");
            }
        }

        printf("\n");
    }
    return 0;
}