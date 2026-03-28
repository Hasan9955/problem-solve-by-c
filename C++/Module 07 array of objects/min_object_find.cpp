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

    Student minObject;
    minObject.mark = INT_MAX;

    Student maxObject;
    maxObject.mark = INT_MIN;

    for(int i = 0; i<n; i++){

        if(arr[i].mark < minObject.mark){
            minObject = arr[i];
        }
        
        if(arr[i].mark > maxObject.mark){
            maxObject = arr[i];
        }
    }

    cout << minObject.name << " " << minObject.roll << " " << minObject.mark << endl;

    cout << maxObject.name << " " << maxObject.roll << " " << maxObject.mark << endl;


    
    return 0;
}