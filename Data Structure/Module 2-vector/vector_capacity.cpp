#include<bits/stdc++.h>
using namespace std;

int main () {

    vector<int>v;

    // cout << v.size() << endl; // O(1)
    // cout << v.max_size() << endl; // O(1)

    // If value is out of capacity then auto capacity increate by * 2
    // cout << v.capacity() << endl; // O(1)
    v.push_back(10); 
    v.push_back(20); 
    v.push_back(30); 
    v.push_back(40); 
    v.push_back(50);
    
    //Clears the vector elements. Do not delete the memory, only clear the value.

    // v.clear(); // O(n)
    v.resize(2);
    v.resize(7, 100);
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
    // cout << v[4] << endl;

    // cout << v.empty() << endl; // O(1)


    return 0;
}