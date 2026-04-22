#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {100, 200, 300};
    int arr[5] = {77, 88, 55};

    list<int> mylist(10, 15);

    mylist = {4, 8, 3, 7, 6, 5, 9};

    cout << "Size: " << mylist.size() << endl;

    cout << "List elements: ";
    for (auto it = mylist.begin(); it != mylist.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // list <int> list2(mylist);
    // list <int> list2(v.begin(), v.end());
    list<int> list2(arr, arr + 5);

    cout << "List 2 elements: ";
    for (auto it = list2.begin(); it != list2.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}