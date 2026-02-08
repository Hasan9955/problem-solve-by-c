#include <stdio.h>


int fun (int n) {

    int arr[n];


    for (int  i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < n; i++) {

        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("%d %d", min , max);


}


int main () {

    int n;

    scanf("%d", &n);
    
    fun(n);
    
    return 0;
}