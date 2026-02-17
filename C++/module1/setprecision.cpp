#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;

int main () {

    double a;

    cin >> a;

    // cout << a << endl;
    cout << fixed << setprecision(3) << a << endl;
    printf("%0.6f\n", a);

    return 0;
}