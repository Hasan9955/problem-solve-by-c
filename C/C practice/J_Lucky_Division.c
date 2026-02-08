#include <stdio.h>
int main () {

    int lucky[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};


    int n;
    scanf("%d", &n);

    // printf("%d", n);
    int flag = 0;

    for(int i = 0; i <= 14; i++){
        if(n % lucky[i] == 0){
            flag = 1;
        }
    }

    if(flag == 0){
        printf("NO");
    } else {
        printf("YES");
    }


    return 0;
}