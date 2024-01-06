class Solution {
public:
    TreeNode* build(vector<int>&io,int i_st, int i_en, vector<int>&po,int p_st, int p_en, unordered_map < int, int > &hm){
        if((p_st > p_en) || (i_st > i_en))
            return NULL;
        
        int root_index = hm[po[p_en]];
        int num_ele = root_index - i_st;

        TreeNode* root = new TreeNode(po[p_en]);
        root->left =  build(io, i_st, root_index - 1,po, p_st, p_st+num_ele-1, hm);
        root->right = build(io, root_index+1,i_en, po, p_st + num_ele, p_en-1, hm);
        return root;
    }

    TreeNode* buildTree(vector<int>& io, vector<int>& po) {
        int p_len = po.size();
        int i_len = io.size();
        if(p_len != i_len)
            return NULL;

        unordered_map <int,int> hm;

        for(int i = 0; i < i_len; i++)
            hm[io[i]] = i;

        return build(io, 0, i_len-1, po,0, p_len - 1, hm);
    }
};
