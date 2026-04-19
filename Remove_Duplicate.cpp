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

int size(Node *head){
    int count = 0;
    Node *temp = head;

    while (temp != 0)
    {
        count++;
        temp = temp->next;
    }
    
    return count;
}

// COMPLEXITY O(N^2)
// void remove_duplicates(Node *head){
//     Node *i = head;

//     while (i != NULL){
//         Node *prev = i;
//         Node *j = i->next;

//         while (j != NULL)
//         {
//             if(i->val == j->val){
//                 prev->next = j->next;
//                 delete j;
//                 j = prev->next;
//             } else {
//                 prev = j;
//                 j = j->next;
//             }
//         }

//         i = i->next;
        
//     }

// }


// COMPLEXITY O(N);
void remove_duplicates(Node *head){

    unordered_set<int>seen;

    Node *curr = head;
    Node *prev = NULL;

    while (curr != NULL)
    {
        if(seen.count(curr->val)){
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        } else {
            seen.insert(curr->val);
            prev = curr;
            curr = curr->next;
        }
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
            remove_duplicates(head);
            print_linked_list(head);
            break;
        }

        insert_at_tail(head, tail, v);
    }
    
    return 0;
}