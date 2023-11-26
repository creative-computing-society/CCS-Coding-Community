// recursive method

class Solution {
public:

    void traversal(vector<int> &res, TreeNode* node){
        // Left Right Parent

        if(node->left){
            traversal(res, node->left);
        }

        if(node->right){
            traversal(res, node->right);
        }

        res.push_back(node->val);
        
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;

        if(root){
            traversal(res, root);
        }

        return res;
    }
};

// iterative method 

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> st;
        TreeNode* node = root;
        TreeNode* last = NULL;

        while(node || !st.empty()){
            if(node){
                st.push(node);
                node = node->left;
            }else{
                TreeNode* temp = st.top();
                if(temp->right && temp->right != last){
                    node = temp->right;
                }else{
                    res.push_back(temp->val);
                    last = temp;
                    st.pop();
                }
            }
        }

        return res;
    }
};

// two stack method

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> st1;
        stack<TreeNode*> st2;
        TreeNode* node = root;

        if(root){
            st1.push(root);
        }

        while(!st1.empty()){
            TreeNode* temp = st1.top();
            st1.pop();
            st2.push(temp);

            if(temp->left){
                st1.push(temp->left);
            }

            if(temp->right){
                st1.push(temp->right);
            }
        }

        while(!st2.empty()){
            res.push_back(st2.top()->val);
            st2.pop();
        }

        return res;
    }
};