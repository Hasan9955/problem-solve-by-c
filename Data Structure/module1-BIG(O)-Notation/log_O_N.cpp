#include<bits/stdc++.h>
using namespace std;

int main () {

    long long int n, m;
    cin >> n;
    m = n;
    // ------------- TIME COMPLEXITY O(log(n)) -------------------
    while (n > 0){   
        int digit = n % 10;
        cout << digit << endl;
        n /= 10;
    }

    cout << "\n NEXT STEP \n" << endl;

    // ------------- TIME COMPLEXITY O(log(n)) -------------------
    for(int i = 1; i <= m; i = i * 2){
        cout << i << endl;
    }

    return 0;
}