#include<bits/stdc++.h>
using namespace std;

int main () {

    int a;
    cin >> a;
    int arr[a];

    for(int i = 0; i < a; i++) 
    {
        cin >> arr[i];
    }

    for(int i = 0; i < a; i++){

        for(int j = i + 1; j < a; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

            // Swap using inbuilt function
            // swap(arr[i], arr[j]);
        }
    }

    // Sorting using inbuilt function
    // sort(arr, arr + a);

    for(int i = 0; i < a; i++){
        cout << arr[i] << " ";
    }

    return 0;
}