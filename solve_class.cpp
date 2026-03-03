// #include<bits/stdc++.h>
// using namespace std;

// class Student {
//     public:
//     char name[100];
//     int roll;
//     char section[10];
//     float math_marks;
//     int cls;

//     Student(char* name, int roll, char* section, float math_marks, int cls){
//         strcpy(this->name, name);
//         strcpy(this->section, section);

//         this->roll = roll;
//         this->math_marks = math_marks;
//         this->cls = cls;

//         // cout << name << " " << roll << " " << section << " " << math_marks << " " << cls << endl;

//     }
// };

// int main () {

//     Student hasan("Hasan", 55, "A", 85, 10);
//     Student rahim("Rahim", 22, "B", 90, 10);
//     Student karim("Karim", 99, "C", 96, 10);

//     if(hasan.math_marks > rahim.math_marks){
//         if(hasan.math_marks > karim.math_marks){
//             cout << hasan.name << " " << hasan.roll << " " << hasan.section << " " << hasan.math_marks << " " << hasan.cls << endl;
//         }else{
//             cout << karim.name << " " << karim.roll << " " << karim.section << " " << karim.math_marks << " " << karim.cls << endl;
//         }
//     } else {
//         if(rahim.math_marks > karim.math_marks){
//             cout << rahim.name << " " << rahim.roll << " " << rahim.section << " " << rahim.math_marks << " " << rahim.cls << endl;
//         }else{
//             cout << karim.name << " " << karim.roll << " " << karim.section << " " << karim.math_marks << " " << karim.cls << endl;
//         }
//     }

//     return 0;
// }

// updated version

// #include <bits/stdc++.h>
// #include <cstring>
// using namespace std;

// class Student {
// public:
//     char name[100];
//     int roll;
//     char section[10];
//     float math_marks;
//     int cls;

//     Student(const char* name, int roll, const char* section, float math_marks, int cls) {
//         strcpy(this->name, name);
//         strcpy(this->section, section);
//         this->roll = roll;
//         this->math_marks = math_marks;
//         this->cls = cls;
//     }
// };

// int main() {

//     Student student1("Hasan", 55, "A", 85, 10);
//     Student student2("Rahim", 22, "B", 90, 10);
//     Student student3("Karim", 99, "C", 96, 10);

//     Student top = student1;

//     if (student2.math_marks > top.math_marks)
//         top = student2;

//     if (student3.math_marks > top.math_marks)
//         top = student3;

//     cout << top.name << " "
//          << top.roll << " "
//          << top.section << " "
//          << top.math_marks << " "
//          << top.cls << endl;

//     return 0;
// }

// more updated version
#include <bits/stdc++.h>
#include <cstring>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    char section[10];
    float math_marks;
    int cls;

    Student()
    {
        cout << "Name Roll Section Math_Marks Class" << endl;
        cin >> this->name >> this->roll >> this->section >> this->math_marks >> this->cls;
    }
};

int main()
{

    Student student1;
    Student student2;
    Student student3;

    Student top = student1;

    if (student2.math_marks > top.math_marks)
        top = student2;

    if (student3.math_marks > top.math_marks)
        top = student3;

    cout << top.name << " "
         << top.roll << " "
         << top.section << " "
         << top.math_marks << " "
         << top.cls << endl;

    return 0;
}