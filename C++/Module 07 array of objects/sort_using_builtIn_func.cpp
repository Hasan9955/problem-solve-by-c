#include<bits/stdc++.h>
using namespace std;


class Student 
{
    public:
    string name;
    int roll;
    int mark;


};

bool cmp(Student a, Student b){
    // return a.mark >= b.mark;
    // if(a.mark >= b.mark){
    //     return true;
    // } else if (a.mark == b.mark){
    //     if(a.roll <= b.roll){
    //     return true; 
    //     } else {
    //         return false;
    //     }
    // } else {
    //     return false;
    // }
    if(a.mark == b.mark){
        return a.roll <= b.roll;
    } else {
        return a.mark >= b.mark;
    }
}


int main () {

    int n; 
    cin >> n;
    Student arr[n];

    for(int i = 0; i < n; i++){
        
        cin >> arr[i].name >> arr[i].roll >> arr[i].mark;
    } 

    sort(arr, arr + n, cmp);


    for(int i = 0; i < n; i++){
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].mark << endl;
    }


    
    return 0;
}