#include <stdio.h>
#include <string.h>

 

int main () {

    char str[1005];

    scanf("%s", &str);

    int len = strlen(str);

    int i = 0, j = len - 1;
    int flag = 1;

    while (i < j)
    {
        
        if(str[i] != str[j]){
            flag = 0;
        }

        i++;
        j--;
        
    }

    if(flag == 0){
        printf("NO");
    } else {
        printf("YES");
    }


    



    return 0;
}




















// int main () {

//     char arr[10001];

//     scanf("%s", arr);
    
//     char rev[1000];
    
//     for (int i = 0; i < strlen(arr); i++) {
        
//         rev[i] = arr[strlen(arr) - i - 1];
//     }
 
 
//     if(strcmp(arr, rev) == 0) printf("YES\n");
//     else printf("NO\n");
//     return 0;
// }