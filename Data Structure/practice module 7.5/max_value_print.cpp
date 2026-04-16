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



void insert_at_tail (Node *&head, Node *&tail, int v){

    Node *newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print_max (Node *head){
    
    if(head == NULL){
        return;
    }
    
    Node *temp = head;
    int maxNum = temp->val;

    while (temp != NULL)
    {
        if(maxNum < temp->val){
            maxNum = temp->val;
        }

        temp = temp->next;
    }

    cout << maxNum << endl;
    
}

int main () {

    Node *head = NULL;
    Node *tail = NULL;

    while(true){
        int v;
        cin >> v;

        if(v == -1){
            print_max(head);
            break;
        }

        insert_at_tail(head, tail, v);
    }
    return 0;
}