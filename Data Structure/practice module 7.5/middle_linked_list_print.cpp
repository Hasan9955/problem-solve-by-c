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

int size (Node *head){

    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
    
}

void print_middle (Node *head){

    if(head == NULL){
        return;
    }

    Node *temp = head;
    int s = size(head);

    if(s % 2 != 0){
        for(int i = 0; i < s / 2; i++){
            temp = temp->next;
        }
        cout << temp->val << endl;
    }
    else{
        for(int i = 0; i < (s / 2) - 1; i++){
            temp = temp->next;
        }

        cout << temp->val << " " << temp->next->val << endl;
    }
}

int main () {

    Node *head = NULL;
    Node *tail = NULL;



    while (true)
    {
        int v;
        cin >> v;

        if(v == -1){
            print_middle(head);
            break;
        }


        insert_at_tail(head, tail, v);
    }
    
    
    return 0;
}