#include <stdio.h>
int main () {

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){

        int a;
        scanf("%d", &a);

        char arr[a+1];
        scanf("%s", &arr);

        int totalT=0;
        int totalP=0;

        for(int i = 0; i < a; i++){
            if(arr[i] == 'T'){
                totalT++;
            } else if(arr[i] == 'P'){
                totalP++;
            }
        }

        if(totalP == totalT){
            printf("Draw\n");
        } else if(totalP > totalT){
            printf("Pathaan\n");
        } else if(totalT > totalP){
            printf("Tiger\n");
        }
    }
    return 0;
}