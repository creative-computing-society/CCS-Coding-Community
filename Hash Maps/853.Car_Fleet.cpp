class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        if(n == 1) 
            return 1;

        vector<pair<int,double>> cars;
        
        for(int i=0;i<n;i++){
            double time = (double)(target - postion[i])/speed[[i]];
            cars.push_back({position[i],time});
        }

        sort(cars.begin(),cars.end());

        int ans =0 ;
        double maxtime = 0.0 ;

        for(int i = n-1;i>=0;i--){
            double time = cars[i].second;
            if(time > maxtime){
                maxtime = time;
                ans++;
            }
        }
        return ans;
    }
};
