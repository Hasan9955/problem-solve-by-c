#include<bits/stdc++.h>
using namespace std;



class Student {

    public: 
    int roll; 
    int cls;
    double gpa;
    Student (int r, int c, double g) {
        
        this->roll = r;
        this->cls = c;
        this->gpa = g;
        
        // (*this).roll = r;
        // (*this).cls = c;
        // (*this).gpa = g;

        cout << "Roll: " << roll << " Class: " << cls << " GPA: " << gpa << endl;
    }
};


int main () {

    Student rahim(55, 6, 4.95);
    Student hasan(66, 7, 4.85);

    return 0;
}