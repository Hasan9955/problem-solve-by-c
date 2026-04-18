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

void print_linked_list(Node *head){
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
    
}


void max_min_difference(Node *head){
    Node *temp = head;

    int max = temp->val;
    int min = temp->val;

    while(temp != NULL){
        if(temp->val > max){
            max = temp->val;
        }
        if(temp->val < min){
            min = temp->val;
        }
        temp = temp->next;
    }

    cout << max - min << endl;
}


int main () {

    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int v;
        cin >> v;

        if(v == -1){
            // print_linked_list(head);
            max_min_difference(head);
            break;
        }

        insert_at_tail(head, tail, v);
    }
    
    return 0;
}