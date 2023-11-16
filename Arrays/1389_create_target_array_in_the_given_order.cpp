// link- https://leetcode.com/problems/create-target-array-in-the-given-order/description/

// Solution 1- Using vector.insert()
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index)
    {
        vector<int> result;
        for(int i=0;i<index.size();++i)
            result.insert(result.begin()+index[i],nums[i]);
        return result;
    }
};

// Solution 2- Without vector.insert()
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target(nums.size());
        // we will write some code to modify the index array
        for(int i=0;i<index.size();i++){
            for(int j = i-1;j>=0;j--){
                if(index[i]<=index[j]) index[j]++;
            }
        }

        for(int i=0;i<nums.size();i++){
            target[index[i]] = nums[i];
        }
        return target;
    }
};
