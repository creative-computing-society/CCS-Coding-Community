class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l = 1, h = nums.size()-1;
        while(l<=h){
            int mid = l + (h-l)/2;
            int count = 0;
            for(auto i:nums){
                // all three approaches are valid
                // count += i<=mid;
                if(i<=mid){
                    count++;
                }
                // count += i<=mid?1:0;
            }
            if(count<=mid){
                l=mid+1;
            }
            else{
                h = mid-1;
            }

        }
        return l;
    }
};
