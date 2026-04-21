#include<bits/stdc++.h>
using namespace std;

int main () {

    // list <int> mylist;
    list <int> mylist(10, 5);
    list <int> list2 = {7, 8, 9};


    

    mylist.pop_back();
    mylist.pop_back();
    mylist.pop_back();
    mylist.pop_back();

    mylist.pop_front();
    mylist.pop_front();
    mylist.pop_front();

    
    mylist.push_front(100);
    
    mylist.push_back(20);

    // mylist.assign(list2.begin(), list2.end());

    //insert
    mylist.insert(mylist.begin(), list2.begin(), list2.end());
    // mylist.insert(mylist.end(), list2.begin(), list2.end());
    
    for(auto it = mylist.begin(); it != mylist.end(); it++){
        cout << *it << " ";
    }

    cout << endl;

    cout << mylist.size() << endl;

    return 0;
}