class Solution {
public:

// 2 wrong pairs

// 2, 1, 3.    1 pair is out of order
// 1, 7, 3, 5, 6, 2, 8,   2 pairs 
// 7.3 
// 6,2

// 1st ele of 1st pair and 2nd ele of 2nd pair

    TreeNode * first, *sec , *prev;

    void inorder(TreeNode* root){
      if(root==NULL) return ;
      inorder(root->left);
      if(prev!=NULL && prev->val > root->val ){
            if(first==NULL){
                first=prev;
            }
           sec=root; 
      }

      prev=root;

      inorder(root->right);
    }


    void recoverTree(TreeNode* root) {
        first=NULL;
        sec=NULL;
        prev=NULL;
        inorder(root);

        swap(first->val,sec->val);
        
    }
};
