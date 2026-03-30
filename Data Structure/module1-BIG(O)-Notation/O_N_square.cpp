#include<bits/stdc++.h>
using namespace std;

int main () {

    int n;
    cin >> n;
    int arr[n];

    // O(n)
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // for(int i = 1; i <= n; i++){
    //     for(int j = i + 1; j < n; j++){
    //         cout << "Hello" << endl;
    //     }
    // }

    // O(n*n)
    for(int  i = 0; i <= n-1; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}