#include<bits/stdc++.h>
using namespace std;



class Node
{
    public:
    int val;
    Node *left;
    Node *right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }

};


Node * input_tree(){
    int val;
    cin >> val;

    Node *root;

    if(val == -1) root = NULL;
    else root = new Node(val);

    queue <Node *> q;
    if(root) q.push(root);

    while (!q.empty())
    {
        Node * current = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node * left;
        Node * right;

        if(l == -1) left = NULL;
        else left = new Node(l);

        if(r == -1) right = NULL;
        else right = new Node(r);

        current->left = left;
        current->right = right;

        if(left) q.push(left);
        if(right) q.push(right);

    }

    return root;
    

}

void level_order(Node *root){

    queue <Node *> q;
    if(root) q.push(root);

    while(!q.empty()){

        Node * p = q.front();
        q.pop();

        cout << p->val << " ";

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);

    }
}


int count(Node *root){
    
    if(root == NULL) return 0;

    return 1 + count(root->left) + count(root->right);
}

int height(Node *root){

    if(root == NULL) return 0;

    return 1 + max(height(root->left), height(root->right));
}

int main () {
    
    Node * root = input_tree();

    // level_order(root);
    int total = count(root);
    int h = height(root);

    // if(total == (1 << h) - 1) cout << "YES";
    if(total == pow(2, h) - 1) cout << "YES";
    else cout << "NO";


    return 0;
}