#include <stdio.h>
#include <string.h>

int main () {

    char arr[1000000];

    scanf("%s", arr); 
    
    for(int i = 0; strlen(arr) > i; i++) {
        if(arr[i] == ',') arr[i] = ' ';

        else if(arr[i] >= 'A' && arr[i] <= 'Z') arr[i] += 32;

        else if(arr[i] >= 'a' && arr[i] <= 'z') arr[i] -= 32;
        
    }

    printf("%s\n", arr);
    
    return 0;
}