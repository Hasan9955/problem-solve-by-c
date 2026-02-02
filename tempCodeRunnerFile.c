

#include <stdio.h>

void odd_even(){

    
    int n;

    scanf("%d", &n);

    long long arr[n]; 

    for(int i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
    }


    long long  oddCount = 0, evenCount = 0;

    for(int i = 0; i < n; i++){

        if(arr[i] % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("%lld %lld", evenCount, oddCount);


}


int main () {

    odd_even();


    return 0;
}