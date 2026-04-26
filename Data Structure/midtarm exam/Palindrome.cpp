// Problem Statement

// You need to take a doubly linked list of integer value as input. You need to tell if the doubly linked list forms a palindrome or not.

// Note: You need to solve this using Doubly Linked List, otherwise you will not get marks.

// Input Format

// Input will contain the values of the doubly linked list, and will terminate with -1.
// Constraints

// 1 <= N <= 10^6; Here N is the maximum number of nodes of the linked list.
// 0 <= V <= 1000; Here V is the value of each node.
// Output Format

// Output "YES" if it forms a palindrom otherwise output "NO".
// Sample Input 0

// 1 2 3 2 1 -1
// Sample Output 0

// YES
// Sample Input 1

// 1 2 2 1 -1
// Sample Output 1

// YES
// Sample Input 2

// 1 -1
// Sample Output 2

// YES
// Sample Input 3

// 1 2 3 1 -1
// Sample Output 3

// NO

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

void insert_at_tail(Node *&head, Node *&tail, int v)
{

    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
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

void check_palindrome(Node *head, Node *tail)
{

    int sz = size(head);

    bool flag = true;

    Node *tempI = head;
    Node *tempJ = tail;

    for (int i = 1; i <= sz / 2; i++)
    {

        if (tempI->val != tempJ->val)
        {
            flag = false;
            break;
        }

        tempI = tempI->next;
        tempJ = tempJ->prev;
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {

        int v;
        cin >> v;

        if (v == -1)
        {
            check_palindrome(head, tail);
            break;
        }

        insert_at_tail(head, tail, v);
    }
    return 0;
}