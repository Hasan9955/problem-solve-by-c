#include <stdio.h>
int main () {

    int n;

    scanf("%d", &n);

    int arr[n];
    

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

    }


    int lowestNum = arr[0];
    int lowestNumIndex = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] < lowestNum){
            lowestNum =  arr[i];
            lowestNumIndex = i;
        }

    }

    printf("%d %d\n", lowestNum, lowestNumIndex + 1);
    return 0;
}