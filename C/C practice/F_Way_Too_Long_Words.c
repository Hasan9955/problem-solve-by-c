#include <stdio.h>
#include <string.h>
int main () {

    int n;

    scanf("%d", &n);



    char arr[n][1000]; 

    for (int i = 0; i < n; i++){
        scanf("%s", arr[i]);

        // if(strlen(arr) > 10) {
        //     printf("%c%d%c\n", arr[0], strlen(arr) - 2, arr[strlen(arr) - 1]);
        // } 
        // else {
        //     printf("%s\n", arr);
        // }
    }


    for (int i = 0; i < n; i++){
        if(strlen(arr[i]) > 10) {
            printf("%c%d%c\n", arr[i][0], strlen(arr[i]) - 2, arr[i][strlen(arr[i]) - 1]);
        } 
        else {
            printf("%s\n", arr[i]);
        }
    }
 
    return 0;
}