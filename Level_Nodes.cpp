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


void levelNode(Node *root, int level)
{
    if (!root)
    {
        cout << "Invalid";
        return;
    }

    queue<Node*> q;
    q.push(root);

    int currentLevel = 0;
    bool found = false;

    while (!q.empty())
    {
        int size = q.size();

        if (currentLevel == level)
        {
            found = true;
            while (size--)
            {
                Node* node = q.front();
                q.pop();
                cout << node->val << " ";
            }
            return;
        }

        while (size--)
        {
            Node* node = q.front();
            q.pop();

            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }

        currentLevel++;
    }

    cout << "Invalid";
}


void print_nodes_at_level(Node *root, int target_level){
    if(root == NULL) {
        cout << "Invalid" << endl;
        return;
    }
    
    queue<pair<Node*, int>> q;  // pair<node, level>
    q.push({root, 0});
    
    vector<int> result;
    bool level_found = false;
    
    while(!q.empty()){
        Node* current = q.front().first;
        int level = q.front().second;
        q.pop();
        
        if(level == target_level){
            result.push_back(current->val);
            level_found = true;
        }
        else if(level > target_level){
            break;  // No need to go deeper
        }
        
        if(current->left){
            q.push({current->left, level + 1});
        }
        if(current->right){
            q.push({current->right, level + 1});
        }
    }
    
    if(!level_found || result.empty()){
        cout << "Invalid" << endl;
    }
    else{
        for(int i = 0; i < result.size(); i++){
            if(i > 0) cout << " ";
            cout << result[i];
        }
        cout << endl;
    }
}



int main () {
    
    Node * root = input_tree();

    int l;
    cin >> l;

    // levelNode(root, l);
    print_nodes_at_level(root, l);
 
    return 0;
}