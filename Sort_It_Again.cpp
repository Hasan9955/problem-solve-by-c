#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char sec;
    int roll;
    int math_mark;
    int eng_mark;
};

bool cmp (Student a, Student b) {
    if(a.eng_mark == b.eng_mark){
        if(a.math_mark == b.math_mark){
            return a.roll < b.roll;
        } else return a.math_mark > b.math_mark;
    } else return a.eng_mark > b.eng_mark;
}


int main()
{

    int n;

    cin >> n;

    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].sec >> arr[i].roll >> arr[i].math_mark >> arr[i].eng_mark;
    }


    sort(arr, arr + n, cmp);


    for(int i = 0; i < n; i++){
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].sec << " " << arr[i].roll << " " << arr[i].math_mark << " " << arr[i].eng_mark << endl;
    }

}