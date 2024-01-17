class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        long long res = 1;
        queue<pair<TreeNode*, long long>> q;
        q.push({root,0});
        while(!q.empty()){
            long long count = q.size();
            int start = q.front().second;
            res = max(res, q.back().second-q.front().second+1);
            for(int i = 0;i<count;i++){
                pair<TreeNode*, long long> p = q.front();
                long long index = p.second-start;
                q.pop();
                if(p.first->left){
                    q.push({p.first->left, 2*index+1});
                }
                if(p.first->right){
                    q.push({p.first->right, 2*index+2});
                }
            }
        }
        return res;
    }
};