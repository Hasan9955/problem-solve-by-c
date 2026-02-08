#include <stdio.h>
int main () {

    long long int n;

    scanf("%lld", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int countDivByTwo = 0;
    int countDivByThree = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0) countDivByTwo++;
        else if(arr[i] % 3 == 0) countDivByThree++;
    }


    printf("%d %d", countDivByTwo, countDivByThree);





    
    return 0;
}