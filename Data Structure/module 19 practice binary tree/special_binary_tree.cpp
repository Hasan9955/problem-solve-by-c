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

Node *input_tree() {

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

        Node *left;
        Node *right;

        if(l == -1) left = NULL;
        else left = new Node(l);

        if(r == -1) right = NULL;
        else right = new Node(r);

        p->left = left;
        p->right = right;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);


    }

    return root;
}
 
int count (Node *root){
    if(root == NULL ) return 0;
    int l = count(root->left);
    int r = count(root->right);

    return l + r + 1;
}


void level_order(Node *root){

    if(root == NULL) return;
    
    queue <Node*> q;

    q.push(root);

    while(!q.empty()){

        // 1. ber kore ana
        Node *f = q.front();
        q.pop();

        // 2. jabotio kaj
        cout << f->val << " ";

        // 3. tar children gulo ke rakha
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}
 
bool isSpecialBinaryTree(Node *root){

    if(!root->left && !root->right) return true;
    if(!root->left || !root->right) return false;

    bool l = isSpecialBinaryTree(root->left);
    bool r = isSpecialBinaryTree(root->right);

    if(l == false || r == false ) return false;
    return true;
}

 int main () {
    
    Node *root = input_tree(); 
    
    level_order(root);
    cout << endl;

    bool ans = isSpecialBinaryTree(root);
 
    
    if(ans){
        cout << "Ther binary tree is special: true" << endl;
    } else {
        cout << "Ther binary tree is not special." << endl;
    }
    

    return 0;
}
 




/**


input 3 5 1 6 2 0 8 -1 -1 7 4 -1 -1 -1 -1 -1 -1 -1 -1
input 10 20 30 40 50 60 70 80 -1 90 100 -1 -1 -1 -1 -1 110 -1 120 -1 -1 -1 -1 -1 -1
#                              10 (level 0)
#                             /  \
#                            /    \
#                          20      30 (level 1)
#                         / \     / \
#                        /   \   /   \
#                      40    50 60   70 (level 2)
#                     /     / \     
#                    /     /   \    
#                   80    90   100   (level 3)
#                 /   \  / \   / \
#                /     \/   \ /   \
#              None  None 110 None 120 None (level 4)
#                        / \     / \
#                       /   \   /   \
#                     None None None None (level 5)


 */