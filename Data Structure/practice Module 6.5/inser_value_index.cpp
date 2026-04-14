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

void insert_at_tail(Node *&head, int v)
{

    Node *newNode = new Node(v);

    if (head == NULL)
    {
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

void insert_at_position(Node *&head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *temp = head;

    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;

        print_linked_list(head);
        return;
    }

    for (int i = 1; i <= pos - 1; i++)
    {
        if (temp->next == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    //    cout << endl << endl << "Inserted at position " << pos << endl << endl;

    print_linked_list(head);
}

int main()
{

    Node *head = NULL;

    while (true)
    {
        int v;
        cin >> v;

        if (v == -1)
        {
            break;
        }

        insert_at_tail(head, v);
    }

    while (true)
    {
        int pos, v;
        cin >> pos >> v;

        insert_at_position(head, pos, v);
    }

    return 0;
}