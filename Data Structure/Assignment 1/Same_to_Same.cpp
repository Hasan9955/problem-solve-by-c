// Problem Statement

// You will be given two singly linked list of integer values as input. You need to check if all the elements of both list are same which means both list are same. If they are same print "YES" otherwise print "NO".

// Note: You must use singly linked list, otherwise you will not get marks.

// Input Format

// First line will contain the values of the first singly linked list, and will terminate with -1.
// Second line will contain the values of the second singly linked list, and will terminate with -1.
// Constraints

// 1 <= N1, N2 <= 1000; Here N1 and N2 is the maximum number of nodes of the first and second linked list.
// 0 <= V <= 1000; Here V is the value of each node.
// Output Format

// Output "YES" or "NO".
// Sample Input 0

// 10 20 30 40 -1
// 10 20 30 40 -1
// Sample Output 0

// YES
// Sample Input 1

// 10 20 30 40 -1
// 10 20 30 -1
// Sample Output 1

// NO
// Sample Input 2

// 10 20 30 40 -1
// 40 30 20 10 -1
// Sample Output 2

// NO


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

void compare_linked_list (Node *head1, Node *head2){

    int size1 = size(head1);
    int size2 = size(head2);

    if(size1 != size2){
        cout << "NO" << endl;
        return;
    }

    Node *temp1 = head1;
    Node *temp2 = head2;

    bool flag = false;

    while(temp1 != NULL && temp2 != NULL){
        if(temp1->val != temp2->val){
            flag = true;
            break;
        }

        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if(flag) cout << "NO";
    else cout << "YES";
}


int main () {

    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        int v;
        cin >> v;
        
        if(v == -1){

            break;
        }

        insert_at_tail(head1, tail1, v);
    }

    
    while (true)
    {
        int v;
        cin >> v;
        
        if(v == -1){

            break;
        }

        insert_at_tail(head2, tail2, v);
    }


    compare_linked_list(head1, head2);

    
    return 0;
}