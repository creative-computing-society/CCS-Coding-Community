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
class Solution {
public:
    int solve(int &res,TreeNode* root){
        if(!root) return 0;

        int left = solve(res,root->left);
        int right = solve(res,root->right);

        res = max(res,left + right);

        return 1 + max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int res = INT_MIN;
        solve(res,root);
        return res;
    }
};