class Solution {
public:
//stl
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        //transpose
        
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //reversal

        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
