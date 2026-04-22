#include<bits/stdc++.h>
using namespace std;

int main () {

    list <int> myList;

    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;
 
        if(myList.size() < x){
            cout << "Invalid" << endl;
            continue;
        }

        myList.insert(next(myList.begin(), x), v);

        for(int val: myList){
            cout << val << " ";
        }
        cout << endl;

        for(auto it = myList.rbegin(); it != myList.rend(); it++){
            cout << *it << " ";
        }
        cout << endl;

    }
    
    return 0;
}