#include<bits/stdc++.h>
using namespace std;

int main () {

    int n;
    cin >> n;
    vector<int> v(n, 0);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    int m;
    cin >> m;
    vector <int> v2(m, 0);

    for(int i = 0; i < m; i++){
        cin >> v2[i];
    }

    int x;
    cin >> x;

    v.insert(v.begin() + x, v2.begin(), v2.end());

    for(int i = 0; i < n + m; i++){
        cout << v[i];

        if(i != (n+m-1)){
            cout << " ";
        }
    }

    return 0;
}