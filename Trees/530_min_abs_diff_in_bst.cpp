class Solution {
public:

    int inorder(TreeNode * root,int & val,int &min_dif){

        if(root->left!=NULL){
            inorder(root->left,val,min_dif);
        }
        if(val>=0){
            min_dif=min(min_dif,(root->val)-val);
        }

        val=root->val;

        if(root->right!=NULL){
            inorder(root->right,val,min_dif);
        }


        return min_dif;

    }

    int getMinimumDifference(TreeNode* root) {

        int min_dif=INT_MAX,  val=-1;

        return inorder(root,val,min_dif);

        
    }
};
