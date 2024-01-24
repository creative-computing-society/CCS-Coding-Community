class Solution {
public:
    int binary_search(int target,vector<int> nums){
        int low=0,high=nums.size()-1;
        while (low <= high) {
            int mid = low + (high - low)/2;
            if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int s = binary_search(target,nums); 
        int e = binary_search(target+1,nums) - 1;
        if(s < nums.size() && nums[s]==target)
            return {s,e};
        return {-1,-1}; 
    }
};