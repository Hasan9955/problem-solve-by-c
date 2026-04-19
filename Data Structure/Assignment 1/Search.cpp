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

void search_linked_list(Node *head, int x){
    Node *temp = head;
    bool flag = false;


    for(int i =0; temp != NULL; i++){
        if(temp->val == x){
            flag = true;
            cout << i << endl;
            break;
        }

        temp = temp->next;
    }

    if(!flag){
        cout << -1 << endl;
    }

    
}


int main () {

    int t;
    cin >> t;

    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        while (true)
        {
            int v;
            cin >> v;

            if(v==-1){
                int x;
                cin >> x;
                search_linked_list(head, x);

                break;
            }

            insert_at_tail(head, tail, v);
        }
        
    }
    
    
    return 0;
}