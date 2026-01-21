#include <stdio.h>
int main () {

    int n;
    scanf("%d", &n);

    int arr[n];

   

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
  
    int x;
    scanf("%d", &x);

    int flag = 0;


    for(int i = 0; i < n; i++){

        for(int j = i + 1; j < n; j++){
            int sum = arr[i] + arr[j];
            // printf("%d %d\n", arr[i], arr[j]);
            if(sum == x){
                flag = 1;
                // printf("YES");
            }
        }
    }


    if(flag == 0){
        printf("NO");
    } else {
        printf("YES");
    }

    return 0;
}