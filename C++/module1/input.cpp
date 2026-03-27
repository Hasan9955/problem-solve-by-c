#include <iostream>
using namespace std;

int main() {
    int a;
    long long b;
    char c;

    cin >> a >> b >> c;

    cout << a << '\n'
         << b << '\n'
         << c << '\n';

    // Convert char to int
    cout << static_cast<int>(c) << '\n';

    // Convert int to char
    cout << static_cast<char>(a) << '\n';
    cout << static_cast<char>(97) << '\n';

    // Convert int to long long
    cout << static_cast<long long>(a) << '\n';

    return 0;
}