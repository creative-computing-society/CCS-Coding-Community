class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        
        int minr=0;
        int maxr=m-1;
        int minc=0;
        int maxc=n-1;

        vector<vector<int>>mat(m,vector<int>(n,-1));

        ListNode* c=head;

        while(c!=NULL){

            //left to right
            for(int i=minc;i<=maxc && c!=NULL;i++){
                    int j=minr;
                    mat[j][i]=c->val;
                    c=c->next;    
            }
            minr++;

            //top to bot
            for(int i=minr;i<=maxr && c!=NULL;i++){
                int j= maxc;
                mat[i][j]=c->val;
                c=c->next;

            }
                maxc--;
            //right to left

            for(int i=maxc;i>=minc && c!=NULL;i-- ){
                    int j=maxr;
                    mat[j][i]=c->val;
                    c=c->next;

            }

            maxr--;

            //bot to top

            for(int i=maxr;i>=minr && c!=NULL ;i-- ){
                    int j=minc;
                    mat[i][j]=c->val;
                    c=c->next;

            }

            minc++;

        }

        return mat;

    }
};
