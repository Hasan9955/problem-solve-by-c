#include <iostream>
#include<algorithm>
using namespace std;

int main () 
{
    int a, b, x, y, z;

    cin >> a >> b >> x >> y >> z;

    // if(a < b) {
    //     cout << a << endl;
    // } else {
    //     cout << b << endl;
    // }

    int c = min({a, b, x, y, z});
    int d = max({a, b, x, y, z});

    cout << "min value is " << c << endl;
    cout << "max value is " << d << endl;


    return 0;
}