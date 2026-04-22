#include<bits/stdc++.h>
using namespace std;

int main () {

    list <int> mylist = {10, 20, 30, 40, 50, 60, 10};

    // mylist.remove(10);

    // low to high
    // mylist.sort();

    // high to low
    // compare function ------- greater<int>() ------------
    // mylist.sort(greater<int>());

    // remove duplicate
    // first need to sort it
    // mylist.sort();
    // mylist.unique();


    // make list reverse
    mylist.reverse();



    for(int val: mylist){
        cout << val << endl;
    }


    return 0;
}