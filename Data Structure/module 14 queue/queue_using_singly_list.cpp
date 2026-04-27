#include<bits/stdc++.h>
using namespace std;


class Node 
{
    public:
     int val;
     Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class myQueue {
    public: 
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

    void push(int val){
        sz++;
        Node * newNode = new Node(val);

        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    void pop(){
        sz--;
        if(head->next == NULL){
            head = NULL;
            tail = NULL;
            return;
        }

        Node * deleteNode = head;
        head = head->next;
        delete deleteNode;
    }

    int top(){
        return head->val;
    }

    bool empty() {
        if(sz == 0) return true;
        else return false;
    }
};


int main () {

    myQueue qq;

    qq.push(10);
    qq.push(200);
    qq.push(300);
    qq.push(400);
    qq.push(500);
    qq.push(600);

    while(!qq.empty()){
        cout << qq.top() << endl;
        qq.pop();
    }

    
    return 0;
}