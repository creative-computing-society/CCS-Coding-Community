class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> freq;
        int cnt=0;
        for(int i:nums){
            freq[i]++;
            cnt=max(cnt,freq[i]);
        }

        vector<vector<int>> ans(cnt);

        for(auto e:freq){
            int num_freq = e.second;
            int num = e.first;
            for(int i=0;i<num_freq;i++){
                ans[i].push_back(num);
            }
        }
        return ans;
    }
};

