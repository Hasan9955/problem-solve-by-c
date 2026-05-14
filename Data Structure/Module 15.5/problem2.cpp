#include <bits/stdc++.h> 


class Node {

    public:
        int data;
        Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};


class Queue {

    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;


public:
    Queue() {
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        return sz == 0;
    }

    void enqueue(int data) {
        
        sz++;
        Node *newNode = new Node(data);

        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;

    }

    int dequeue() {
        
        if(head == NULL){
            return -1;
        }

        int ans = head->data;
        Node *deleteNode = head;
        head = head->next;
 

        if(head == NULL){
            tail = NULL;
        }

        delete deleteNode;

        sz--;

        return ans;
    }

    int front() {
        
        if(head == NULL){
            return -1;
        }

        return head->data;
    }
};