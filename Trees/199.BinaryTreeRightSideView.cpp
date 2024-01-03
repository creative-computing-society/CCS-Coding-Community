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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;

        queue<TreeNode*> q;
        q.push(root);

        while(q.size()>0){
            int s = q.size();
            for(int i=0;i<s;i++){
                TreeNode* f = q.front();
                q.pop();
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);

                if(i == s-1)
                    ans.push_back(f->val);
            }
        }
        return ans;
    }
}; 