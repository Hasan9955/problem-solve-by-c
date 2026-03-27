#include<bits/stdc++.h>
using namespace std;

int main () {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string s;

        cin >> s;

        int first3digitSum = 0;
        int last3digitSum = 0;

        for(int i = 0; i < 3; i++){
            int m = s[i] - '0';
            cout << m;
            
        }

        for(int i = 3; i < 7; i++){
            int m = s[i] - '0';
            cout << m;
            
        }
    }
    return 0;
}