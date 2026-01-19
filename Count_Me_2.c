#include <stdio.h>
#include <string.h>
int main () {

    char a[100000];

    scanf("%s", a);

    int len = strlen(a);

    int countConsonant = 0;

    for(int i = 0; i < len; i++){ 
        if(a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u'){
            countConsonant++;
        }
    }

    printf("%d", countConsonant);


    return 0;
}