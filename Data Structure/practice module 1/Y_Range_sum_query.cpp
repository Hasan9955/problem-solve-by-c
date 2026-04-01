// #include<bits/stdc++.h>
// using namespace std;

// int main () {

//     int n, q;

//     cin >> n >> q;
//     vector<long long int>v(n);

//     for(int i = 0; i < n; i++){
//         cin >> v[i];
//     }


//     for(int i = 0; i < q; i++){
//         int l, r;

//         cin >> l >> r;

//         cout << accumulate(v.begin() + l - 1, v.begin() + r, 0) << endl;
//     }


//     return 0;
// }


// resolution to prevent Time limit execute
#include<bits/stdc++.h>
using namespace std;

int main () {

    int n, q;
    cin >> n >> q;

    vector <long long int> v(n + 1, 0);
    vector<long long int> preSumV(n + 1, 0);

    for(int i = 1; i <= n; i++) {
        cin >> v[i];

        preSumV[i] = preSumV[i - 1]  + v[i];
        // cout << v[i] << " " << sumV[i] << endl;
    }

    for(int i = 0; i<q; i++){
        int l, r;

        cin >> l >> r;

        if(l == 0) cout << preSumV[r] << endl;
        else cout << preSumV[r] - preSumV[l - 1] << endl;
        // cout << sumV[r] << " - " << sumV[l - 1] << " : " << sumV[r] - sumV[l - 1] << endl;
    }
    return 0;
}