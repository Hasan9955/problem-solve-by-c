#include<bits/stdc++.h>
using namespace std;


namespace user1 {
     int age = 24;
     void hello() 
     {
        cout << "Hello my name is user1" << endl;
        
     }
}

namespace user2 {
     int age2 = 30;
     void hello2() 
     {
        cout << "Hello my name is user2" << endl;

     }
}

using namespace user1;
using namespace user2;
int main () { 

    // cout << user1::age<< endl;
    cout << user2::hello2 << endl;

    cout << age << endl;
    cout << age << endl;

    return 0;
}