#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> v1(n);
    vector<int> v2(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    v1.insert(v1.begin(), v2.begin(), v2.end());

    bool first = true;

    for(int val:v1){
        if(!first){
            cout << " ";
        } else {
            first = false;
        }
        cout << val;
    }


    return 0;
}