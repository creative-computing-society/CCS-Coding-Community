//all anagrams would have a common string pattern when sorted , hence we can use the sorted string as the key 
// and keep checking the sorted version of current string matches existing key in map ,then it is added to this key's new value 

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>umap;
        for(auto s:strs){
            string sorted=s;
    
            sort(sorted.begin(),sorted.end());
            umap[sorted].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto i:umap) ans.push_back(i.second);
        return ans;
    }
};
