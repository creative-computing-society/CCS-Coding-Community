class Solution {
public:
    bool isValidBST(TreeNode* root) {
        long prev = (long)INT_MIN-1;
        return solve(root, prev);
    }
    bool solve(TreeNode* root, long &prev){
        if(root->left){
            if(solve(root->left, prev) == false) return false;
        }
        if(prev<root->val){
            prev = root->val;
        }
        else{
            return false;
        }
        if(root->right){
            if(solve(root->right, prev) == false) return false;
        }
        return true;
    }
};