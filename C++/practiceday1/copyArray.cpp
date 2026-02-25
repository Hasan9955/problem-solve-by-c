#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    // int arrA[n]; 
    int *arrA = new int[n];



    for(int i = 0; i < n; i++){
        cin >> arrA[i];
    }
 
    int m;
    cin >> m;

    // int arrB[m];
    int *arrB = new int[m];

    for(int i = 0; i < n; i++){
        arrB[i] = arrA[i];
    }

    for(int i = n; i < m; i++){
        cin >> arrB[i];
    }
     

    for(int i = 0; i < m; i++){
        cout << arrB[i] << " ";
    }
 


    return 0;
}