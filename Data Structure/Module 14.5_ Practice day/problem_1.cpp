#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node *prev;
    Node *next;

    Node(int val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }

};


class myStack {

    public: 
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;


    void push(int val){
        sz++;
        Node *newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop(){
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if(tail == NULL) head = NULL;

        delete deleteNode;
    }

    int top() {
        return tail->val;
    }

    int size() {
        return sz;
    }

    bool empty() {
        if(sz == 0) return true;
        else return false;
    }
};


int main () {
    myStack stack1;
    myStack stack2;

    int q; cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        stack1.push(x);
    }

    int n; cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        stack2.push(x);
    }


    if(stack1.size() != stack2.size()) {
        cout << "NO" << endl;
        return 0;
    }

    while(!stack1.empty()) {
        if(stack1.top() != stack2.top()) {
            cout << "NO" << endl;
            return 0;
        }
        stack1.pop();
        stack2.pop();
    }

    cout << "YES" << endl;
    
    return 0;
}