class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        bool flag = false;

        while(!q.empty()){
            TreeNode* front = q.front();

            if(!front){
                flag = true;
            }
            else{
                if(flag){
                    return false;
                }

                q.push(front->left);
                q.push(front->right);

            }

            q.pop();
        }
        return true;
        
    }
};