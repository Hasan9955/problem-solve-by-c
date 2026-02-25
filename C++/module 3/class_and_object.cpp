#include<bits/stdc++.h>
using namespace std;

class Student {
    public: 
    char name[100];
    int roll;
    double cgpa;
};

int main () {

    Student a;

    a.roll = 10;
    a.cgpa = 3.5;
    
    char temp[100] = "Hasan";
    strcpy(a.name, temp);

    cout << a.name << endl;
    cout << a.roll << endl;
    cout << a.cgpa << endl;


    return 0;
}