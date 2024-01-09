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
    int height(TreeNode * root){
        if(root==NULL){
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);

        return 1+max(left,right);

    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }

        bool left=isBalanced(root->left);
        bool right= isBalanced(root->right);
        if(!left || !right){
            return false;
        }
        return(abs(height(root->left)-height(root->right))<=1);
        
    }
};