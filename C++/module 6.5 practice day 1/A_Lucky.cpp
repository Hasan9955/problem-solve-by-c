#include<bits/stdc++.h>
using namespace std;

int main () {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string s;

        cin >> s;

        int sum = 0;

        for(int i = 0; i < 6; i++){
            if(i < 3) sum += s[i] - '0';
            else sum -= s[i] - '0';
        }

        if(sum == 0){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// int main () {

//     int n;
//     cin >> n;

//     for(int i = 0; i < n; i++){
//         string s;

//         cin >> s;

//         int first3digitSum = 0;
//         int last3digitSum = 0;

//         for(int i = 0; i < 3; i++){
//             int m = s[i] - '0';
//             first3digitSum+=m;
//             // cout << m << endl;
            
//         }

//         for(int i = 3; i < 6; i++){
//             int m = s[i] - '0';
//             last3digitSum+=m;
//             // cout << m << endl;
            
//         }

//         // cout << first3digitSum << endl;
//         // cout << last3digitSum << endl;

//         if(first3digitSum == last3digitSum){
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }