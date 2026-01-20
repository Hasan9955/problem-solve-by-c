#include <stdio.h>
#include <string.h>

int main () {

    char a[10001];

    scanf("%s", a);

    int len = strlen(a);

    int alphabet[26] = {0};

    for(int i = 0; i < len; i++){
        int index = a[i] - 'a';
        alphabet[index]++;
    }

    for(int i = 0; i < 26; i++){
        if(alphabet[i] > 0){
            printf("%c - %d\n", i + 'a', alphabet[i]);
        }
    }

    return 0;
}