//recursive method
class Solution {
public:
    void dfs(vector<int>& tree, TreeNode* root){
        if(root->left){
            dfs(tree, root->left);
        }
        tree.push_back(root->val);
        if(root->right){
            dfs(tree, root->right);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root) dfs(res, root);

        return res;
        
    }
};

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

//iterative method
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> stk;
        vector<int> res;
        TreeNode* current = root;

        while(!stk.empty() || current != NULL){
            while(current != NULL){
                stk.push(current);
                current = current->left;
            }

            TreeNode* node = stk.top();
            res.push_back(node->val);
            stk.pop();
            current = node->right;
        }

        return res;
    }
};
