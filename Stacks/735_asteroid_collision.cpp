class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        int n = ast.size();
        stack<int> s;
        for(int i=0;i<n;i++){
            if(ast[i]>0 || s.empty()) s.push(ast[i]);
            else{
                while(!s.empty() && s.top()>0 && s.top()<abs(ast[i])){
                    s.pop();
                }
                if(!s.empty() && s.top()==-ast[i]){
                    s.pop();
                }
                else{
                    if(s.empty() || s.top()<0){
                        s.push(ast[i]);
                    }
                }
            }
        }
        vector<int> result(s.size());
        // int i = s.size()-1;
        for(int i = s.size()-1;i>=0;i--){
            result[i] = s.top();
            s.pop();
            // i--;
        }
        return result;
    }
};