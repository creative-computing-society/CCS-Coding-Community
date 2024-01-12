class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        for( auto ch:s){
            if(ans.size()==0 || ans.size()>0 && ans.back()!=ch){
                ans.push_back(ch);
            }
            else{
                ans.pop_back();
            }
        }
        return ans;
    }
};
