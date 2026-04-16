#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_linked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
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
    tail = newNode;
}

void sort_linked_list(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    Node *temp = head;

    for (Node *i = temp; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
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
            sort_linked_list(head);
            print_linked_list(head);
            break;
        }

        insert_at_tail(head, tail, v);
    }

    return 0;
}