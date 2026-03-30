#include<bits/stdc++.h>
using namespace std;


int main () {

    int n;
    cin >> n;

    // ------------- TIME COMPLEXITY O(nlog(n)) -------------------
    for(int i = 1; i <= n; i++){ // O(n)
        int x = i;
        while(x > 0){ // O(log(n))
            int digit = x % 10;
            cout << digit << " ";
            x /= 10;
        }
        cout << endl;
    }
    return 0;
}






// Pro version using --------- RECURSION -------------
// #include<bits/stdc++.h>
// using namespace std;

// void rev(int n) {
//     if(n == 0) return;

//     rev(n / 10);
//     cout << n % 10 << " ";
// }

// int main () {

//     int n;
//     cin >> n;

//     for(int i = 1; i <= n; i++){
//         rev(i);
//         cout << endl;
//     }

//     return 0;
// }