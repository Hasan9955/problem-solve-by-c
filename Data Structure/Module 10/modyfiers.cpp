#include<bits/stdc++.h>
using namespace std;

int main () {

    list <int> myList = {10, 20, 30};
    list<int> newList = {55, 88, 77, 22, 44};

    // newList = myList;
    // newList.assign(myList.begin(), myList.end());
    // newList.insert(newList.end(), myList.begin(), myList.end());
    
    // newList.pop_back();
    // newList.pop_front();

    // newList.push_back(500);
    // newList.push_front(500);

    // newList.insert(next(newList.begin(), 5), {100, 200, 300});

    // newList.erase(next(newList.begin(), 1), next(newList.begin(), 3));

    // replace(newList.begin(), newList.end(), 22, 100);
 

    // for(int val: newList){
    //     cout << val << " ";
    // }


    auto it = find(newList.begin(), newList.end(), 601);
    
    if(it == newList.end()){
        cout << "NOT FOUND";
    } else {
        cout << "FOUND";
    }
    return 0;
}