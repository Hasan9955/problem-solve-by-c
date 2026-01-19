#include <stdio.h>
#include <string.h>


int main () {

    int n;
    scanf("%d", &n);


    char a[n];

    scanf("%s", a);
    int sum = 0;
    int len = strlen(a);
    

    for(int i = 0; i < n; i++){
        
        sum = sum + (a[i] - '0');
        
        if(i == len - 1) break;
    }


    printf("%d", sum);

    return 0;
}