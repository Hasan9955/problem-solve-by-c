#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};
class Stack
{

    Node *head = NULL;
    int sz = 0;

public:
    Stack()
    {
    }

    int getSize()
    {
        return sz;
    }

    bool isEmpty()
    {
        return sz == 0;
    }

    void push(int data)
    {
        sz++;

        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;
    }

    void pop()
    {
        if (head == NULL)
        {
            return;
        }

        Node *deleteNode = head;

        head = head->next;

        delete deleteNode;

        sz--;
    }

    int getTop()
    {
        if (head == NULL)
        {
            return -1;
        }

        return head->data;
    }
};