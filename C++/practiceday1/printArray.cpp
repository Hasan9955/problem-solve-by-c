#include<bits/stdc++.h>
using namespace std;


int * get_Array(int n) {
    int *arr = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    return arr;
}
int main () {
    int n;
    cin >> n;

    int *res = get_Array(n);

    for(int i = 0; i < n; i++){
        cout << res[i] << " ";
    }

    return 0;
}