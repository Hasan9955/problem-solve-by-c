#include<bits/stdc++.h>
using namespace std;


class Student {

    public: 
        int roll;
        int cls;
        double gpa;
        Student(int roll, int cls, double gpa){
            this->roll = roll;
            this->cls = cls;
            this->gpa = gpa;
        }
};

// <----------------- return by value ----------------->
// Student fun () {
//     Student rahim(352, 6, 4.95);

//     return rahim;
// }


// int main () {


//     Student ans = fun();

//     cout << "Roll: " << ans.roll << " Class: " << ans.cls << " GPA: " << ans.gpa << endl;
    
//     return 0;
// }




// <----------------- return by address ----------------->
// BUT THIS IS WRONG
// WE HAVE
Student * fun () {
    Student rahim(352, 6, 4.95);

    Student *p = &rahim;

    return p;
}


int main () {
    Student *ans = fun();

    // cout << "Roll: " << ans.roll << " Class: " << ans.cls << " GPA: " << ans.gpa << endl;
    
    cout << "Roll: " << ans->roll << " Class: " << ans->cls << " GPA: " << ans->gpa << endl;
    
    return 0;
}