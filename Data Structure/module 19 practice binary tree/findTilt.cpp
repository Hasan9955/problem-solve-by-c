/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

//  int solve(TreeNode * root, int &total) {

//     if(root == NULL ){
//         return 0;
//     }

//     int leftSum = solve(root->left, total);
//     int rightSum = solve(root->right, total);

//     total += abs(leftSum - rightSum);

//     return leftSum + rightSum + root->val;

//  }


// class Solution {
// public:
//     int findTilt(TreeNode* root) {
//         int total = 0;

//         solve(root, total);
//         return total;
//     }
// };