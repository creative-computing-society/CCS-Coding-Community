class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> umap;
        for(auto i:stones){
            umap[i]++;
        }
        int ans = 0;
        for(char i:jewels){
            ans += umap[i];
        }
        return ans;
    }
};