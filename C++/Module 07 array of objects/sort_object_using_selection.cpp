#include<bits/stdc++.h>
using namespace std;


class Student 
{
    public:
    string name;
    int roll;
    int mark;


};


int main () {

    int n; 
    cin >> n;
    Student arr[n];

    for(int i = 0; i < n; i++){
        
        cin >> arr[i].name >> arr[i].roll >> arr[i].mark;
    }


    for(int i = 0; i < n; i++){

        for(int j = i; j < n; j++){
            if(arr[i].mark < arr[j].mark){
                swap(arr[i], arr[j]);
            } else if(arr[i].mark == arr[j].mark){
                if(arr[i].roll > arr[j].roll){
                    swap(arr[i], arr[j]);
                }
            }
        }
    }


    for(int i = 0; i<n; i++){
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].mark << endl;
    }


    
    return 0;
}