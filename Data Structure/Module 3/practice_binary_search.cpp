#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> v(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int x;
    cin >> x;
    int l = 0;
    int r = n - 1;
    bool flag = false;

    sort(v.begin(), v.end());

    while (l <= r)
    {
        int mid_index = (l + r) / 2;
        cout << "value of L: " << l << endl;
        cout << "value of R: " << r << endl;
        cout << "Mid Index: " << mid_index << endl;

        if (v[mid_index] == x)
        {
            flag = true;
            break;
        }
        if (x > v[mid_index])
        {
            // dane jaw
            cout << "DANE JAW" << endl;
            l = mid_index + 1;
        }
        else
        {
            // bame jaw
            cout << "BAME JAW" << endl;
            r = mid_index - 1;
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}