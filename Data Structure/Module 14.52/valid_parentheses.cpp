#include<bits/stdc++.h>
using namespace std;


int main () {
    string str;
    cin >> str;


    stack<char> st;
    for(char ch : str) {
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }
        else {
            if(st.empty()){
                cout << "false" << endl;
                return 0;
            }

            if(ch == ')' && st.top() != '('){
                cout << "false" << endl;
                return 0;
            }
            if(ch == '}' && st.top() != '{'){
                cout << "false" << endl;
                return 0;
            }
            if(ch == ']' && st.top() != '['){
                cout << "false" << endl;
                return 0;
            }

            st.pop();
        }
    }

    if(st.empty()) cout << "true" << endl;
    else cout << "false" << endl;
    
    return 0;
}