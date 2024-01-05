class Solution {
public:
    //sliding window
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int start=k-1,end=n-1;
        int sum=0;
        int max_score=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }

        max_score=sum;
        while(start>=0 && end>start){
            sum+=cardPoints[end]-cardPoints[start];
            max_score=max(max_score,sum);
            start--;
            end--;
        }

        return max_score;
    }
};
