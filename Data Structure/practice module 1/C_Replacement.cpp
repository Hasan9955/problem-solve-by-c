#include<bits/stdc++.h>
using namespace std;

int main () {

    int n;
    cin >> n;

    vector<int>v(n);
    bool first = true;
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }


    for(int i = 0; i < n; i++){
        if(v[i] > 0){
            v[i] = 1;
        } else if(v[i] < 0){
            v[i] = 2;
        }
    }

    for(int val: v){
        if(first){
            first = false;
        } else {
            cout << " ";
        }
        cout << val;
    }
    return 0;
}