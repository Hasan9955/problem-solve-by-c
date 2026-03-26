#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        // (*this).name=name;
        this->name = name;
        this->age = age;
    }

    void Hello() 
    {
        cout << "Hello" << endl;
    }
};

int main()
{
    Person rakib("Rakib Ahmed", 24);
    cout << rakib.name << " " << rakib.age << endl;

    
    return 0;
}