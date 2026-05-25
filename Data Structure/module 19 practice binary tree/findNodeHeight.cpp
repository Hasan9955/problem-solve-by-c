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

int maxHeight (Node *root){

    if(root == NULL){
        return 0;
    }

    int l = maxHeight(root->left);
    int r = maxHeight(root->right);

    return max(l , r) + 1;
}
 
// int getNodeHeight(Node *root, int target, int level){

//     if(root == NULL){
//         return 0;
//     }

//     if(root->val == target){
//         return level;
//     }

//     int left = getNodeHeight(root->left, target, level + 1);

//     if(left != 0){
//         return left;
//     }

//     return getNodeHeight(root->right, target, level + 1);

// }
 
int getNodeHeight(Node *root, int target, int level){

    queue<pair<Node *, int>> q;
    q.push({root, level});

    while (!q.empty())
    {
        pair<Node *, int> parent =  q.front();
        q.pop();


        Node * node = parent.first;
        int level = parent.second;

        if(node->val == target){
            return level;
        }

        if(node->left){
            q.push({node->left, level + 1});
        }
        if(node->right){
            q.push({node->right, level + 1});
        }

        

    }
    

}

 int main () {
    
    Node *root = input_tree(); 
    
    level_order(root);
    cout << endl;
    
    int target;
    cin >> target;

    int nodeHeight = getNodeHeight(root, target, 1);

    cout << nodeHeight << endl;

    return 0;
}
 