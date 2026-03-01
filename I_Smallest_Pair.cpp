#include<bits/stdc++.h>
using namespace std;

int main () {

    int t;
    cin >> t;

    for(int o = 0; o < t; o++){


        int n;
        cin >> n;
        int arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int smallestNumber = INT_MAX;

        for(int i = 0; i < n; i++){

            for(int j = i + 1; j < n; j++){
                int res = arr[i] + arr[j] + (j - i);
                // cout << res << endl;
                if(res < smallestNumber){
                    smallestNumber = res;
                }
                // cout << smallestNumber << endl;
            }
        }


        cout << smallestNumber << endl;
    }
    return 0;
}