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

void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;

    head = newNode;
}

int size(Node *head)
{
    int count = 0;
    Node *temp = head;

    while (temp != 0)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

void delete_at_position(Node *&head, Node *&tail, int pos)
{
    int s = size(head);

    if (s <= pos)
    {
        return;
    }

    if (pos == 0)
    {
        Node *deleteNode = head;
        head = head->next;

        if (head == NULL)
        {
            tail = NULL;
        }
        
        delete deleteNode;
        return;
    }

    Node *temp = head;

    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
  
    if (deleteNode == tail)
    {
        tail = temp;
        temp->next = NULL;
    }
    else
    {
        temp->next = deleteNode->next;
    }

    delete deleteNode;
}

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

        if (x == 0)
        {
            insert_at_head(head, tail, v);
        }

        if (x == 1)
        {
            insert_at_tail(head, tail, v);
        }

        if (x == 2)
        {
            delete_at_position(head, tail, v);
        }

        print_linked_list(head);
    }

    return 0;
}