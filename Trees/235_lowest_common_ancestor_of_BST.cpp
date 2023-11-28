
//recursive  
// keep descending in the tree until the node satisfies BST property
// ie; value of left < node < right
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root->val > p->val && root->val > q->val)
            return lowestCommonAncestor(root->left,p,q);
        if(root->val < p->val && root->val < q->val)
            return lowestCommonAncestor(root->right,p,q);

        return root;    
    }
};

//iterative 
// same logic 
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while(1){
            if(root->val > p->val && root->val > q->val)
                root=root->left;

            else if(root->val < p->val && root->val < q->val)
                root=root->right;   
            else 
                break;     
        }  
        return root;
    }
};
