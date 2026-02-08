#include <stdio.h>
int main () {

    int n;

    scanf("%d", &n);

    int num[n];


    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < n; i++){
        
        for(int j = i + 1; j < n; j++){
            if(num[i] > num[j]){
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }


    for(int i = 0; i < n; i++){
        printf("%d ", num[i]);
    }

    

    return 0;
}