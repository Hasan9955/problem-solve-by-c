#include <stdio.h>
#include <stdbool.h>
int main () {

    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);


    }

    int x;
    scanf("%d", &x);
    
    bool isFound = false;
    

    for (int i = 0; i < n; i++) {
        if(arr[i] == x) {
            printf("%d\n", i);
            isFound = true;
            break;
        }
    }

    if(!isFound) printf("%d\n", -1);

    return 0;
}