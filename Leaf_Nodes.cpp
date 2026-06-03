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


void take_leaf_node(Node *root, vector<int> &v){

    if(root == NULL) return;

    if(!root->left && !root->right){
        v.push_back(root->val);
    }

    take_leaf_node(root->left, v);
    take_leaf_node(root->right, v);

}


int main () {
    

    Node * root = input_tree();

    // level_order(root);

    vector<int> v;
    take_leaf_node(root, v);

    sort(v.begin(), v.end(), greater<int>());

    // Print all leaf nodes
    // cout << "Leaf nodes: ";
    for(int val : v) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}