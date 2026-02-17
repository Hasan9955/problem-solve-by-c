#include <iostream>
#include<stdio.h>
using namespace std;

int main () {
    int a;
    long long int b;
    char c;
    cin >> a >> b >> c;

    cout << a << endl << b << endl << c << endl;
    //convert char to int
    cout << (int)c << endl;
    cout << int(c) << endl;

    //convert int to char
    cout << char(a) << endl;
    cout << char(97) << endl;

    // convert int to long long int
    cout << (long long int)a << endl;

    return 0;
}