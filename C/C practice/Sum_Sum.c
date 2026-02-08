#include <stdio.h>
int main () {

    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);


    }

    int sumOfPositiveNum = 0;
    int sumOfNegativeNum = 0;

    for (int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            sumOfPositiveNum += arr[i];
        } else {
            sumOfNegativeNum += arr[i];
        }
    }


    printf("%d %d\n", sumOfPositiveNum, sumOfNegativeNum);
    
    return 0;
}