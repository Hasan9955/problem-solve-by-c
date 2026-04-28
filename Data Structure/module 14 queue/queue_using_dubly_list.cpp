#include<bits/stdc++.h>
using namespace std;


class Node 
{
    public:
     int val;
     Node* next;
     Node* prev;


    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myQueue {
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
        if(head->next == NULL){
            Node *deleteNode = head;
            head = NULL;
            tail = NULL;
            delete deleteNode;
            return;
        }

        Node *deleteNode = head;
        head = head->next;
        head->prev = NULL;
        delete deleteNode;

    }

    int top() {
        return head->val;
    }

    bool empty(){
        if(sz == 0) return true;
        else return false;
    }


};


int main () {

    myQueue qu;

    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(80);

    while (!qu.empty())
    {
        cout << qu.top() << endl;
        qu.pop();
    }
    
    
    return 0;
}