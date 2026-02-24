#include<bits/stdc++.h>
using namespace std;

int main () {

    int n;
    
    cin >> n;

    long long int arr[n]; 

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long int max = arr[0];

    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << max << endl;

    return 0;


}