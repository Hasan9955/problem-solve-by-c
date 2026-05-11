#include<bits/stdc++.h>
using namespace std;


int main () {
    
    queue<int> qu;
    stack<int> st;
    queue<int> qu2;


    int n; cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        qu.push(x);
    }
    

    while(!qu.empty())
    {
        st.push(qu.front());
        qu.pop();
    }

    while(!st.empty())
    {
        qu2.push(st.top());
        st.pop();
    }


    while(!qu2.empty())
    {
        cout << qu2.front() << " ";
        qu2.pop();
    }

    
    return 0;
}