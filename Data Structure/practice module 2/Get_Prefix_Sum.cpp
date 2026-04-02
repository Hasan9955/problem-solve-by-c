#include<bits/stdc++.h>
using namespace std;

int main () {

    int n;
    cin >> n;
    vector<long long int>v(n, 0);
    vector<long long int>preSumV(n, 0);

    for(int i = 0; i<n; i++){
        cin >> v[i];

        if(i > 0){
            preSumV[i] = preSumV[i-1] + v[i];
        } else {
            preSumV[i] = v[i];
        }
    }

    for(int i = n - 1; i >= 0; i--){
        cout << preSumV[i] << " ";
    }

    return 0;
}