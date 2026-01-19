#include<stdio.h>
int main() {
    int a;
    int b;

    scanf("%d\n", &a);
    scanf("%d", &b);

    if(a >= b){
        printf("YES");
    }else{
        printf("NO");
    }

   

    return 0;
}