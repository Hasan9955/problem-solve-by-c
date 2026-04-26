// Problem Statement

// You have a doubly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

// You need to insert the value V at index X. Assume that index starts from 0.
// After that for each query you need to print the linked list from left to right and right to left.
// If the index is invalid, then print "Invalid".
// Note: You must use Doubly Linked List, otherwise you will not get marks.

// Input Format

// First line will contain Q.
// Next Q lines will contain X and V.
// Constraints

// 1 <= Q <= 1000;
// 0 <= X <= 1000;
// 0 <= V <= 1000
// Output Format

// For each query print the linked list from left to right and right to left or print "Invalid" as asked.
// Print "L -> " before printing the linked list from left to right.
// Print "R -> " before printing the linked list from right to left.
// Sample Input 0

// 5
// 1 10
// 0 10
// 1 20
// 3 30
// 2 30
// Sample Output 0

// Invalid
// L -> 10
// R -> 10
// L -> 10 20
// R -> 20 10
// Invalid
// L -> 10 20 30
// R -> 30 20 10
// Sample Input 1

// 10
// 0 10
// 1 20
// 0 30
// 1 40
// 6 50
// 0 60
// 4 70
// 4 80
// 2 90
// 1 100
// Sample Output 1

// L -> 10
// R -> 10
// L -> 10 20
// R -> 20 10
// L -> 30 10 20
// R -> 20 10 30
// L -> 30 40 10 20
// R -> 20 10 40 30
// Invalid
// L -> 60 30 40 10 20
// R -> 20 10 40 30 60
// L -> 60 30 40 10 70 20
// R -> 20 70 10 40 30 60
// L -> 60 30 40 10 80 70 20
// R -> 20 70 80 10 40 30 60
// L -> 60 30 90 40 10 80 70 20
// R -> 20 70 80 10 40 90 30 60
// L -> 60 100 30 90 40 10 80 70 20
// R -> 20 70 80 10 40 90 30 100 60

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_left_to_right(Node *head)
{

    Node *temp = head;

    if (head == NULL)
    {
        return;
    }

    cout << "L -> ";
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

void print_right_to_left(Node *tail)
{

    Node *temp = tail;

    if (tail == NULL)
    {
        return;
    }

    cout << "R -> ";
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }

    cout << endl;
}

int size(Node *head)
{
    int count = 0;
    Node *temp = head;

    while (temp)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

void insert_at_position(Node *&head, Node *&tail, int v, int pos)
{

    int sz = size(head);
    // cout << "Size: " << sz << endl;

    Node *newNode = new Node(v);

    if (sz < pos)
    {
        cout << "Invalid" << endl;
        return;
    }

    if (pos == 0)
    {
        if (head == NULL)
        {
            head = newNode,
            tail = newNode;

            print_left_to_right(head);
            print_right_to_left(tail);
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        head = newNode;

        print_left_to_right(head);
        print_right_to_left(tail);
        return;
    }

    if (sz == pos)
    {
        // cout << "sz == pos" << endl;
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;

        print_left_to_right(head);
        print_right_to_left(tail);
        return;
    }

    Node *temp = head;

    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }

    temp->next->prev = newNode;
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;

    print_left_to_right(head);
    print_right_to_left(tail);
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        int x, v;

        cin >> x >> v;

        insert_at_position(head, tail, v, x);
    }

    return 0;
}