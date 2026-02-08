#include <stdio.h>
int main () {

    int n;

    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    
    int maxValue = arr[0];
    int minValue = arr[0];
    int maxIndex = 0;
    int minIndex = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }

        if(arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
    }

    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}