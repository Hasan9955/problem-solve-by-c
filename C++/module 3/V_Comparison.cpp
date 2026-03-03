#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a;
    cin >> a;

    char b;
    cin >> b;

    int c;
    cin >> c;

    switch (b)
    {
    case '<':
        if (a < c)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
        break;
    case '>':
        if (a > c)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
        break;
    case '=':
        if (a == c)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
        break;

    default:
        break;
    }
    return 0;
}