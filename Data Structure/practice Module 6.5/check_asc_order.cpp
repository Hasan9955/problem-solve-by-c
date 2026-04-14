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


void insert_at_tail (Node *&head, int v){

    Node *newNode = new Node(v);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;

}

void check_asc (Node *head){

    Node *temp = head;
    bool flag = false;

    while (temp->next != NULL)
    {
        if(temp->val > temp->next->val){
            flag = true;
            // cout << "NO" << endl;
            break;
        }

        temp = temp->next;
    }

    if(flag) cout << "NO" << endl;
    else cout << "YES" << endl;
    
}


int main () {

    Node *head = NULL;

    while (true)
    {
        int v;
        cin >> v;

        if(v == -1){
            check_asc(head);
            break;
        }

        insert_at_tail(head, v);
    }
    
    return 0;
}