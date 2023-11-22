class Solution {
public:
    map<int ,pair<double,double>>mp;

    void traverse(TreeNode *r,int level){
        if(r==NULL) return;
      //update sum at that level
        mp[level].first+=r->val;
      //a new node is added so update count
        mp[level].second++;

        traverse(r->left,level+1);
        traverse(r->right,level+1);


    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        traverse(root,0);

        for(auto i:mp) 
          ans.push_back(i.second.first/i.second.second);


        return ans;  
    }
};


//BFS solution using queue

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        if (!root) {
            return {};
        }
        vector<double> avgs;
        queue<TreeNode*> todo;
        todo.push(root);
        while (!todo.empty()) {
            int n = todo.size();
            double sum = 0.0;
            for (int i = 0; i < n; i++) {
                TreeNode* node = todo.front();
                todo.pop();
                sum += node -> val;
                if (node -> left) {
                    todo.push(node -> left);
                }
                if (node -> right) {
                    todo.push(node -> right);
                }
            }
            avgs.push_back(sum / n);
        }
        return avgs;
    }
};
