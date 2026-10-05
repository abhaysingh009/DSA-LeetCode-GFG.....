class Solution {
public:
int M,N; int mod=1e9+7;
int helper(int i,int j,int maxM,vector<vector<vector<int>>>&dp){
    if(i<0 or i>=M or j<0 or j>=N) return 1;

    if(maxM<=0)return 0;
    if(dp[i][j][maxM]!=-1)return dp[i][j][maxM];
    int x1=helper(i+1,j,maxM-1,dp);
    int x2=helper(i,j+1,maxM-1,dp);
    int x3=helper(i-1,j,maxM-1,dp);
    int x4=helper(i,j-1,maxM-1,dp);
    return dp[i][j][maxM]=((x1%mod +x2%mod)%mod +(x3%mod +x4%mod)%mod)%mod;
}
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        M=m;N=n;
        vector<vector<vector<int>>>dp(m,vector<vector<int>>(n,vector<int>(maxMove+1,-1)));
       return  helper(startRow,startColumn,maxMove,dp);
    }
};