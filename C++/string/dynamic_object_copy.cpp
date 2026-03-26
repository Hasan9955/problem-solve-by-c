#include<bits/stdc++.h>
using namespace std;



class Person 
{
    public: 
        string name;
        int age;

    Person (string name, int age)
    {
        this->name=name;
        this->age=age;
    }
};


int main () {

    Person* user1 = new Person ("Rakib", 20);
    Person* user2 = new Person("Sakib", 25);


    // copy object

    // -------- option 1 ----------
    // user1 = user2;

    // -------- option 2 ----------
    // user1->name = user2->name;
    // user1->age = user2->age;

    // -------- option 3 ----------
    *user1 = *user2;

    delete user2;

    cout << user1->name << " " << user1->age << endl;

    return 0;
}