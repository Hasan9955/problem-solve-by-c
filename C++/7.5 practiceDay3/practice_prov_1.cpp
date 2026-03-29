// Question: Make a class named Student. Write a program to take a positive integer N as input and make an Student array of size N. 
// Student 
// {
// 	name;
// 	roll;
// 	marks;
// }
// Your task is to sort the Students data according to the marks in descending order. If multiple students have the same marks then sort them according to the roll in ascending order as the roll will be unique.
// Note: name will not contain any spaces.



#include<bits/stdc++.h>
using namespace std;

class Student {
    public: 
        string name;
        int roll;
        int marks;


};

bool cmp (Student a, Student b){
    // return a.marks < b.marks;
    if(a.marks == b.marks){
        return a.roll < b.roll;
    } else return a.marks > b.marks;
};


int main () {

    int n;
    cin >> n;
    
    Student arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }

    sort(arr, arr + n, cmp);

    for(int i = 0; i<n; i++){
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }

    return 0;
}