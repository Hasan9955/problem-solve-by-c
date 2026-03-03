#include<bits/stdc++.h>
using namespace std;

int main () {

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int point = n - 1;
    int flag = 0;

    for(int i = 0; i < n / 2; i++){
        // cout << arr[i] << " " << arr[point] << endl;
        if(arr[i] != arr[point]){
            flag = 1;
            break;
        }

        point--;
    }

    if(flag == 0){
        cout << "YES";
    } else {
        cout << "NO";

    }

    return 0;
}