#include<bits/stdc++.h>
using namespace std;

int main () {

    list <int> firstList;
    list <int> secondList;

    while (true)
    {
        int v; 
        cin >> v;

        if(v == -1){
            break;
        }

        firstList.push_back(v);
    }
    
    while (true)
    {
        int v; 
        cin >> v;

        if(v == -1){
            break;
        }

        secondList.push_back(v);
    }

    if(firstList == secondList){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    
    
    return 0;
}