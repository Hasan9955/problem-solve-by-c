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

void print_linked_list (Node *head){

    Node *temp = head;

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }


}

int get_size(Node *head) {
    Node *temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void print_middle(Node *head) {
    int sz = get_size(head);
    if (sz == 0) return;

    Node *temp = head;
    
    if (sz % 2 != 0) { 
        for (int i = 0; i < sz / 2; i++) {
            temp = temp->next;
        }
        cout << temp->val << endl;
    } else { 
        for (int i = 0; i < (sz / 2) - 1; i++) {
            temp = temp->next;
        }
        cout << temp->val << " " << temp->next->val << endl;
    }
}

int main () {

    Node *head = NULL;

    while (true)
    {
        int v;
        cin >> v;

        if(v == -1){
            print_linked_list(head);
            break;
        }

        insert_at_tail(head, v);
    }
    
    return 0;
}