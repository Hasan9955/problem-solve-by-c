#include<bits/stdc++.h>
using namespace std;

int main () {

    vector<int>v={4, 7, 8, 9, 1};

    // cout << v[v.size()-1] << endl; // option 1
    // cout << v.back() << endl; // option 2

    // cout << v[0] << endl; // option 1
    // cout << v.front() << endl; // option 2

    // vector<int>::iterator it;
    for(auto it=v.begin(); it<v.end(); it++){
        cout << *it << " ";
    }

    return 0;
}