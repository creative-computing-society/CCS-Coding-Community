class Solution {
public:
    bool isValid(string s) {
        map<char, char> umap;
        umap[']']='[';
        umap['}']='{';
        umap[')']='(';
        stack<char> st;
        for(auto &i:s){
            if(i=='[' || i=='(' || i=='{'){
                st.push(i);
            }
            else{
                if(st.empty()) return false;
                else{
                    if(st.top()==umap[i]){
                        st.pop();
                    }
                    else return false;
                }
            }
        }
        return st.empty();
    }
};