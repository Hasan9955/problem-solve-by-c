#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int a, b, c;

    cin >> a >> b >> c;

    // Shortcut by built in function
    // cout << min(min(a, b), c) << " " << max(max(a, b), c) << endl;

    long long int min = 0;
    long long int max = 0;

    if (a <= b && a <= c)
        min = a;
    else if (b <= a && b <= c)
        min = b;
    else
        min = c;

    if (a >= b && a >= c)
        max = a;
    else if (b >= a && b >= c)
        max = b;
    else
        max = c;
    cout << min << " " << max << endl;

    return 0;
}