#include<bits/stdc++.h>
using namespace std;


int main () {
    
    int n, m;
    cin >> n >> m;

    stack <int> st;
    queue <int> qu;

    while(n--) {
        int x;
        cin >> x;
        st.push(x);
    }

    while (m--)
    {
        int x;
        cin >> x;
        qu.push(x);
    }

    bool flag = false;

    if(st.size() != qu.size()) {
        cout << "NO" << endl;
        return 0;
    }

    while(!st.empty() && !qu.empty()) {
        if(st.top() != qu.front()) {
            flag = true;
            break;
        }
        st.pop();
        qu.pop();
    }

    if(flag) cout << "NO" << endl;
    else cout << "YES" << endl;
    
    return 0;
}