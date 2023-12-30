class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        // i left
        //j right
        int n=a.size();
        int i=0,j=n-1;
        vector<int>ans(n,0);
        int k=n-1;
        while(i<=j){
            if(abs(a[i])>=abs(a[j])){
                ans[k]=pow(a[i],2);
                i++;
            }
            else{
                ans[k]=pow(a[j],2);
                j--;
            }

            k--;
        }
        return ans;


    }
};
