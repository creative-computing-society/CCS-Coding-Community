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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        //leetcode- same tree 
        //edge cases:
        if(!subRoot){
            return true;
        }
        if(!root && subRoot){
            return false;
        }
        if(isSame(root, subRoot)){
            return true;
        }
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
private:
    bool isSame(TreeNode* root1, TreeNode* root2){
        //func to check if two trees are same:
        //base cases:
        if(!root1 && !root2){
            return true;
        }
        if(!root1 || !root2){
            return false;
        }
        if(root1->val ==root2->val){
            if(!isSame(root1->left, root2->left)){
                return false;
            }
            if (!isSame(root1->right, root2->right)){
                return false;
            }
        }
        else{
            return false;
        }
        return true;
    }
};