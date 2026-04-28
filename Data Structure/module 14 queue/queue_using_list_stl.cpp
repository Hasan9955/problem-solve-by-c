#include <bits/stdc++.h>
using namespace std;

class myQueue
{

public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_front();
    }

    int top()
    {
        return l.front();
    }

    bool empty()
    {
        if (l.size() == 0)
            return true;
        else
            return false;
    }
};

int main()
{

    myQueue qu;

    qu.push(101);
    qu.push(87455);
    qu.push(79845);
    qu.push(4654);


    while (!qu.empty())
    {
        cout << qu.top() << endl;
        qu.pop();
    }
    
    return 0;
}