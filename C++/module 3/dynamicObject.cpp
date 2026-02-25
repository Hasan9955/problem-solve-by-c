#include<bits/stdc++.h>
using namespace std;



class Student {
    public: 
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa) {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};


Student * fun () {
    Student *rahim = new Student(55, 10, 4.55);
    return rahim;
}


int main () {

    Student *ans = fun();

    cout << "Roll: " << ans->roll << " Class: " << ans->cls << " GPA: " << ans->gpa << endl;

    delete ans;

    return 0;
}