#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;

    vector<long long int> v(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    while (q--)
    {
        long long int x;
        cin >> x;

        //    if(find(v.begin(), v.end(), x) != v.end()){
        if (binary_search(v.begin(), v.end(), x))
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}