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


void print_normal(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *temp = tail;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }

    cout << endl;
}

void insert_at_tail(Node *&head, Node *&tail, int v)
{

    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int size (Node *head){
    int count = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
    
}


void checkPalindrome (Node *&head, Node *&tail){

    Node *i = head;
    Node *j = tail;
    bool flag = true;

    while (i != j && i->next != j)
    {
        
        // swap(i->val, j->val);
        if(i->val != j->val){
            flag = false;
            break;
        }

        i = i->next;
        j = j->prev;
    }

    if(i->next == j){
        if(i->val != j->val){
            flag = false;
        }
    }

    if(flag){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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
            checkPalindrome(head, tail);
            // print_normal(head);
            break;
        }

        insert_at_tail(head, tail, v);
    }


    
    return 0;
}