#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{

    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;

    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *left;
        Node *right;

        if (l == -1)
            left = NULL;
        else
            left = new Node(l);

        if (r == -1)
            right = NULL;
        else
            right = new Node(r);

        p->left = left;
        p->right = right;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

int count(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count(root->left);
    int r = count(root->right);

    return l + r + 1;
}

void level_order(Node *root)
{

    if (root == NULL)
        return;

    queue<Node *> q;

    q.push(root);

    while (!q.empty())
    {

        // 1. ber kore ana
        Node *f = q.front();
        q.pop();

        // 2. jabotio kaj
        cout << f->val << " ";

        // 3. tar children gulo ke rakha
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

void check_leaf(Node *root, vector<int> &v)
{

    if (root == NULL)
        return;

    check_leaf(root->left, v);

    if (!root->left && !root->right)
    {
        v.push_back(root->val);
    }

    check_leaf(root->right, v);

    // vector<int> v;

    // queue<Node *> q;
    // if (root)
    //     q.push(root);

    // while (!q.empty())
    // {

    //     Node *first = q.front();
    //     q.pop();

    //     if (!first->left && !first->right)
    //     {
    //         v.push_back(first->val);
    //     }

    //     if (first->left)
    //         q.push(first->left);
    //     if (first->right)
    //         q.push(first->right);
    // }

    // return v;
}

int main()
{

    Node *root = input_tree();

    level_order(root);
    cout << endl;

    vector<int> v;
    check_leaf(root, v);

    for (int n : v)
    {
        cout << n << " ";
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




 



 void solve(TreeNode *root, vector<int>&ans){

    if(root == NULL) return;

    solve(root->left, ans);

    if(!root->left && !root->right){
        ans.push_back(root->val);
    }

    solve(root->right, ans);
 }


class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        vector<int> v2;

        solve(root1, v1);
        solve(root2, v2);

        if(v1.size() != v2.size()){
            return false;
        }

        bool flag = true;

        for(int i = 0; i < v1.size(); i++){
            if(v1[i] != v2[i]){
                flag = false;
                break;
            }
        }

        return flag;
    }
};

 */








