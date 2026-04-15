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

void insert_at_position(Node *&head, int pos, int v)
{

    Node *newNode = new Node(v);

    // if(head == NULL){
    //     head = newNode;
    //     return;
    // }

    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        if (temp->next == NULL)
        {
            cout << "INVALID";
            return;
        }
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
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

    // Node *temp = head;
    // while (temp->next != NULL)
    // {
    //     temp = temp->next;
    // }

    // temp->next = newNode;
}

int size(Node *head)
{
    Node *temp = head;

    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void delete_node(Node *&head, int pos)
{
    Node *temp = head;

    if (pos == 0)
    {
        head = temp->next;
        delete temp;
        return;
    }

    for (int i = 1; i <= pos - 1; i++)
    {
        if (temp->next == NULL)
        {
            cout << "INVALID" << endl;
            return;
        }
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void print_recursive(Node *head)
{

    if (head == NULL)
    {
        return;
    }

    print_recursive(head->next);
    cout << head->val << " ";
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
            print_linked_list(head);
            break;
        }

        insert_at_tail(head, tail, v);
    }

    for (Node *i = head; i->next != NULL; i = i->next)
    {

        for (Node *j = i->next; j != NULL; j = j->next)
        {
            // cout << i->val << " " << j->val << endl;
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
        // cout << endl;
    }

    print_linked_list(head);

    return 0;
}