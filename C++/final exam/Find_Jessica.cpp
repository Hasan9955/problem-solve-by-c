#include<bits/stdc++.h>
using namespace std;

int main () {

    string s;
    getline(cin, s);

    stringstream ss(s);

    bool flag = false;
 

    while (ss >> s)
    {
        if(s == "Jessica"){
            flag = true;
            break;
        }
    }

    if(flag){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    

    return 0;
}