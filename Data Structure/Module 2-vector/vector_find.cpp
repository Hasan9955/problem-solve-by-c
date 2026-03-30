#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 5, 8, 5, 3, 4, 2};
    
    // vector<int>:: iterator it;
    
    // it = find(v.begin(), v.end(), 4);
    
    auto it = find(v.begin(), v.end(), 4);

    cout << *it << endl; 

    if(it == v.end()) cout << "Not Found";
    else cout << "Found";

    return 0;
}