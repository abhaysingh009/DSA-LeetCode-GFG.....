class Solution {
public:
int uniquePathsWithObstacles(vector<vector<int>>& ob) {
    int m=ob.size();
    int n=ob[0].size();
        vector<vector<long long>>dp(m,vector<long long>(n,0));

        for(int i=m-1;i>=0;i--){
            if(ob[i][n-1]==1)break;
            dp[i][n-1]=1;
        }
        for(int j=n-1;j>=0;j--){
            if(ob[m-1][j]==1)break;
             dp[m-1][j]=1;
        }
        
        for(int i=m-2;i>=0;i--){
            for(int j=n-2;j>=0;j--){
                if(ob[i][j]==1)continue;
                dp[i][j]=dp[i+1][j]+dp[i][j+1];
            }
        }
        return dp[0][0];
        
    }
};