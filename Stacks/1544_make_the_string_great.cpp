class Solution {
public:
    string makeGood(string s) {
        string st;
        for(auto &i:s){
            if(st.empty() || (st.back() != i-'a'+'A' && st.back() != i+'a'-'A')) st.push_back(i);
            else st.pop_back();
        }
        return st;
    }
};