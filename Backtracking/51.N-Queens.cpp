class Solution {
public:

    bool isSafe(int row,int col,vector<int>board,int n){

        //1 r/c
        for(int i=0;i<row;i++){
                if(board[i]==col) return false;
                if(abs(row-i)==abs(col-board[i])) return false;
        }

        return true;

    }


    void solve(int row, vector<int>board,
    vector<vector<string>>& ans, int n){
            // 0 to n-1 satisfy

            //we have a sol
            if(row==n){
                string str="";
                for(int i=0;i<n;i++) str+=".";
                // ....
                vector<string> sol;
                for(int i=0;i<n;i++){
                    string new_row=str;
                    new_row[board[i]]='Q';
                    sol.push_back(new_row);
                }

                ans.push_back(sol);
                return ;

            }

            for(int col=0;col<n;col++){
                    //safety

                    if(row==0 || isSafe(row,col,board,n)){
                        board.push_back(col);
                        solve(row+1,board,ans,n); //soln may or may not
                        board.pop_back();
                    }

            }


    }

    vector<vector<string>> solveNQueens(int n) {
        //keeping the queen row-wise

        vector<vector<string>> ans;
        vector<int>board;  //board[i]-> ith row has the queen at board[i]

        solve(0,board,ans,n);
        return ans;
    }
};
