#include<bits/stdc++.h>
using namespace std;


int * fun () {

    int *a = new int [5];
    for(int i =0; i < 5; i++){
        cin >> a[i];
    }
    // int a[5] = {1, 2, 3, 4, 5};

    return a;
}

int main () {

    int *a = fun();

    for(int i =0; i < 5; i++){
        cout << a[i] << " ";
    } 


    // int *n = new int [5];

    // for (int i = 0; i < 5; i++){
    //     cin >> n[i];
    // }

    // for (int i = 0; i < 5; i++){
    //     cout << n[i] << " ";
    // }



    return 0;
}