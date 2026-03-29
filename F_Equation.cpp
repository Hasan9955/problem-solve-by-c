#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x, n;

    cin >> x >> n;

    long long int sum = 0;

    for (int i = 0; i <= n; i += 2)
    {

        if (i == 0)
        {
            sum = sum + pow(x, i) - 1;
        }
        else
        {
            sum = sum + pow(x, i);
        }
    }

    cout << sum;

    return 0;
}