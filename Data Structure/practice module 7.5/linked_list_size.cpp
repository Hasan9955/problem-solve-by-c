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

int size(Node *head){
    Node *temp = head;

    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}


int main () {

    Node *head = NULL;
    Node *tail = NULL;
    int sizeOfList1 = 0;
    int sizeOfList2 = 0;

    while (true)
    {
        int v;
        cin >> v;
        
        if(v == -1){
            sizeOfList1 = size(head);
            head = NULL;
            break;
        }

        insert_at_tail(head, tail, v);
    }
   
    while (true)
    {
        int v;
        cin >> v;
        
        if(v == -1){
            sizeOfList2 = size(head);
            head = NULL;
            break;
        }

        insert_at_tail(head, tail, v);
    }

    if(sizeOfList1 == sizeOfList2){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}