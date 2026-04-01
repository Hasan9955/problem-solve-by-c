#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> v(n);
    bool isFirst = true;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // reverse(v.begin(), v.end());

    // for(int val: v){
    // if(isFirst){
    //         isFirst = false;
    //     } else {
    //         cout << " ";
    //     }

    //     cout << val;
    // }

    for (int i = n - 1; i >= 0; i--)
    {
        if (isFirst)
        {
            isFirst = false;
        }
        else
        {
            cout << " ";
        }

        cout << v[i];
    }

    return 0;
}