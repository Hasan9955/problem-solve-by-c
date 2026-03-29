#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char sec;
    int roll;
};
int main()
{

    int n;

    cin >> n;

    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].sec >> arr[i].roll;
    }

    // int rev = n - 1;

    // for(int i = 0; i < n; i++){
    //     if(i >= rev) break;
    //     char temp = arr[i].sec;

    //     arr[i].sec = arr[rev].sec;
    //     arr[rev].sec = temp;

    //     rev--;
    // }

    // More professional
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        swap(arr[i].sec, arr[j].sec);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].sec << " " << arr[i].roll << endl;
    }

    return 0;
}