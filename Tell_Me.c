#include <stdio.h>
int main () {

    int testCase;
    scanf("%d", &testCase);

    for(int i = 0; i < testCase; i++) {
        int n;
        scanf("%d", &n);

        int arr[n]; 

        for(int j = 0; j < n; j++){
            scanf("%d", &arr[j]);
        }

        int isExist;
        scanf("%d", &isExist);

        int found = 0;

        for(int k = 0; k < n; k++){
            if(arr[k] == isExist){
                printf("YES\n"); 
                found = 1;
                break;
            }
        }

        if(found == 0){
            printf("NO\n");
        }
 
    }


    return 0;
}