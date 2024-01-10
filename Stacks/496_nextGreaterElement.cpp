class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mpp;
        vector<int> ans(nums1.size(),-1);
        stack<int> st;
        for(int i=0;i<nums1.size();i++){
            mpp[nums1[i]]=i;   //o(m+n)
        }
        for(int i=0;i<nums2.size();i++){
            int current=nums2[i];//1
            while(!st.empty() && st.top()<current){
                int index=mpp[st.top()]; //mpp[1]=1
                st.pop();
                ans[index]=current;//[-1,3,-1]->first iteration
                                   //[]->first iteration stack
               
            }
            if(mpp.find(current)!=mpp.end()){
                st.push(current);
            }
           //st->[1]
           //st->[4]->2nd iteration
           //st->[4,2]->3rd iteration


        }
       return ans;
    }
};