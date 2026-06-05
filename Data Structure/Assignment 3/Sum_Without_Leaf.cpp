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

Node * input_tree() {

    int val;
    cin >> val;
    Node *root;

    if(val == -1) root = NULL;
    else root = new Node(val);

    queue <Node *> q;
    if(root) q.push(root);

    while(!q.empty()){

        Node * p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node * left;
        Node * right;
        if(l == -1) left = NULL;
        else left = new Node(l);

        if(r == -1) right = NULL;
        else right = new Node(r);

        p->left = left;
        p->right = right;

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

int solve (Node *root, int &total){

    if(root == NULL){
        return 0;
    }

    

    int left = solve(root->left, total);
    int right = solve(root->right, total);

    if(root->left || root->right){
        total += root->val;
    }

    return left + right + root->val;

}


int main () {
    

    Node * root = input_tree();

    // level_order(root);

    int total = 0;
    solve(root, total);

    cout << total << endl;

    return 0;
}