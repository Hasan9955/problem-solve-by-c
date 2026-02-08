#include <stdio.h>
int main () {

    int n;

    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int l = 0, r = n - 1;

    while (l <= r) {
        printf("%d", arr[l]);
        l++;

        if (l <= r) printf(" ");

        if (l <= r) {
            printf("%d", arr[r]);
            r--;
        }

        if (l <= r) printf(" ");
    }
    
    return 0;
}