#include <stdio.h>
#include <string.h>


int main () {

    char arr[10001];

    scanf("%s", arr);
    
    char rev[1000];
    
    for (int i = 0; i < strlen(arr); i++) {
        
        rev[i] = arr[strlen(arr) - i - 1];
    }
 
 
    if(strcmp(arr, rev) == 0) printf("YES\n");
    else printf("NO\n");
    return 0;
}