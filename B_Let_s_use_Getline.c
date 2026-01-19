#include <stdio.h> 


int main () {
  
    char s[1000005];

    // scanf("%s", s);
    fgets(s, sizeof(s), stdin);


    
    for (int i = 0; s[i] != '\0'; i++) {
        if(s[i] == '\\'){
            break;
        }
        putchar(s[i]);
        //  printf("%c", s[i]);
    }
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     getline(cin, s);

//     for (char c : s) {
//         if (c == '\\') break;
//         cout << c;
//     }

//     return 0;
// }

 