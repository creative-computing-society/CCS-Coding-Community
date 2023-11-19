class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char,int> counts;

        for(int i=0;i<s.length();i++){
            counts[s[i]]++;
            counts[t[i]]--;
        }

        for(auto e : counts){
            if(e.second )
                return false;
        }

        return true;
    }
};

