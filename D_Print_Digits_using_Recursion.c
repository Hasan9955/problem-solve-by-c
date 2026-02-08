#include <stdio.h>

void fun(int n) {
    if (n == 0) return;

    fun(n / 10);
    printf("%d ", n % 10);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        if (n == 0) {
            printf("0");
        } else {
            fun(n);
        }
        printf("\n");
    }

    return 0;
}










// #include <stdio.h>


// int fun (int n) {

//     if(n <= 0) return 0;
//     int x = n%10;
//     fun(n / 10);
//     printf("%d ", x);
// }


// int main () {

//     int n;
    
//     scanf("%d", &n);

//     for(int i = 0; i < n; i++){
        
//         int a;
//         scanf("%d", &a);
//         fun(a);
//         if(n == 0){
//             printf("0");
//         }
//         printf("\n");
//     }
//     return 0;
// }