class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>um;
        for(int i=0; i<nums.size(); i++){
            um[nums[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto i:um){
            v.push_back({i.first, i.second});
        }
        sort(v.rbegin(), v.rend(), [](auto &left, auto &right){
            return left.second<right.second;
            });
        vector<int>ans;
        for(auto i:v){
            ans.push_back(i.first);
            if(ans.size()==k) 
                break;
        }
        return ans;
    }
};