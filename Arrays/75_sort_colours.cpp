//one pass solution: 
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left=0;// ensures values before it are 0s.
        int right=nums.size()-1; //ensures values after it are 2s.
        int i=0;// to traverse array.
        while(i<=right){
            if(nums[i]==0){
                swap(nums[i],nums[left]);
                i++;
                left++;
            }
            else if (nums[i]==2){
                swap(nums[i],nums[right]);
                right--;
                //dont increment i here.
            }
            else{
                i++; //no need to swap when i is pointing to 1.
            }
        }
    }
};


//two pass solution:
class Solution {
public:
    void sortColors(vector<int>& nums) {
        //to store count:
       int zeroes=0;
        int ones=0;
        int twos=0;
        //storing the count of zeroes, ones and twos in first traversal.
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zeroes++;
            }
            else if(nums[i]==1){
                ones++;
            }
            else{
                twos++;
            }
        }
        //second traversal to fill the array in sorted order.
        for(int i=0;i<nums.size();i++){
            if(i<zeroes){
                nums[i]=0;
            }
            else if(i>=zeroes && i<zeroes+ones){
                nums[i]=1;
            }
            else{
                nums[i]=2;
            }

        }

    }
};