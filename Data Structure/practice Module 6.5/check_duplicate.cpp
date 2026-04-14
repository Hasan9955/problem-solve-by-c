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

    Node * newNode = new Node(v);
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


void check_duplicate (Node *head){


    Node *outer = head;
    bool flag = false;

    // while (outer != NULL)
    // {
    //     Node *inner = outer->next;
    //     while (inner != NULL)
    //     {
    //         if(inner->val == outer->val){
    //             flag = true;
    //             break;
    //         }
    //         inner = inner->next;
    //     }

    //     if(flag){
    //         break;
    //     }

    //     outer = outer->next;
        
    // }

    unordered_set<int> seen;
    while (outer != NULL)
    {
        if(seen.find(outer->val) != seen.end()){
            flag = true;
            break;
        }
        seen.insert(outer->val);
        outer = outer->next;

    }
    

    if(flag){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main () {

    Node *head = NULL;

    while (true)
    {
        int n;
        cin >> n;

        if(n == -1){
            check_duplicate(head);
            break;
        }

        insert_at_tail(head, n);

    }
    
    
    return 0;
}