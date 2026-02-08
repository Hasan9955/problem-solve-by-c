#include <stdio.h>

int main() {
    char s[1000005];
    fgets(s, sizeof(s), stdin);

    int sum = 0;

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        
        sum += s[i] - '0';
    }

    printf("%d\n", sum);
    return 0;
}











// #include <stdio.h>

// int main() {
//     char s[1000005];
//     fgets(s, sizeof(s), stdin);

//     int sum = 0;

//     for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
//         switch (s[i]) {
//             case '0': sum += 0; break;
//             case '1': sum += 1; break;
//             case '2': sum += 2; break;
//             case '3': sum += 3; break;
//             case '4': sum += 4; break;
//             case '5': sum += 5; break;
//             case '6': sum += 6; break;
//             case '7': sum += 7; break;
//             case '8': sum += 8; break;
//             case '9': sum += 9; break;
//         }
//     }

//     printf("%d\n", sum);
//     return 0;
// }
