#include<bits/stdc++.h>
using namespace std;


class Node 
{
    public:
     int val;
     Node* next;
     Node * prev;

    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
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
    newNode->prev = tail;
    tail = newNode;
    
}

void print_list(Node *head){
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;

    }
    cout << endl;
}


int main () {

    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int v;
        cin >> v;

        if( v == -1 ){
            print_list(head);
            break;
        }

        insert_at_tail(head, tail, v);


    }
    
    
    return 0;
}