// link- https://leetcode.com/problems/pascals-triangle/description/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> ans;
       for(int i=1;i<=numRows;i++){
           vector<int> temp(i);
           temp[0]=1;
           temp[i-1]=1;
           for(int j=1; j<i-1;j++){
               temp[j] = ans[i-2][j-1] + ans[i-2][j];
           }
           ans.push_back(temp);
       }
       return ans;
    }
};