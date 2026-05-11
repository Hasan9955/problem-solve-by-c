#include<bits/stdc++.h>
using namespace std;




int main () {
    
    stack<int> st;
    queue<int> qu;

    int n; cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    int q; cin >> q;
    while(q--)
    {
        int x; cin >> x;
        qu.push(x);
    }

    if(st.size() != qu.size()){
        cout << "NO" << endl;
        return 0;
    }

    while(!st.empty()){
        if(st.top() != qu.front()){
            cout << "NO" << endl;
            return 0;
        }
        st.pop();
        qu.pop();
    }

    cout << "YES" << endl;
    return 0;
}