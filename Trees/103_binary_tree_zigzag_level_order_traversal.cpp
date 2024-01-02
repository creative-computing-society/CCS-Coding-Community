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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)
            return ans;

        queue<TreeNode*> q;
        q.push(root);
        bool rev = false;
        while(!q.empty()){
            int s = q.size();
            vector<int> ans2(s,0);
            for(int i=0;i<s;i++){
                TreeNode *ptr = q.front();
                q.pop();
                if(rev){
                    ans2[s-i-1] = ptr->val;
                }else {
                    ans2[i] = ptr->val;
                }
                if(ptr->left) q.push(ptr->left);
                if(ptr->right) q.push(ptr->right);
            }
            ans.push_back(ans2);
            rev = !rev;
        }
        return ans;
    }
};