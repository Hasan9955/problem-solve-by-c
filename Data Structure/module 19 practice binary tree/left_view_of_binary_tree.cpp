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
  
int getNodeHeight(Node *root, int target, int level){

    queue<pair<Node *, int>> q;
    if (root) q.push({root, level});

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

    return 0;
}


// ---------- slove using queue and pair ----------

// vector<int> getLeftView(Node *root)
// {
    
//     queue<pair<Node *, int>> q;
    
//     if(root) q.push({root, 1});
//     bool freq[3005] = {false};
//     vector<int>v;

//     while(!q.empty()){

//         pair<Node *, int> pr = q.front();
//         q.pop();

//         Node * node = pr.first;
//         int level = pr.second;
        
//         if(freq[level] == false){
//             v.push_back(node->val);
//             freq[level] = true;

//         }

//         if(node->left) q.push({node->left, level + 1});
//         if(node->right) q.push({node->right, level + 1});

//     }

//     return v;
// }


void getLeftView(Node *root, int level, vector<int>&ans)
{
    
    if(root == NULL) return;

    if(level == ans.size()){
        ans.push_back(root->val);
    }

    getLeftView(root->left, level + 1, ans);
    getLeftView(root->right, level + 1, ans);

}


 int main () {
    
    Node *root = input_tree(); 
    
    level_order(root);
    cout << endl;

    vector <int> ans;
    
    getLeftView(root, 0, ans);
    
    for (int i : ans)
    {
        cout << i << " ";
    }
    

    return 0;
}
 




/**


input 10 20 60 30 50 70 -1 -1 40 -1 -1 -1 -1 80 -1 -1 -1
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