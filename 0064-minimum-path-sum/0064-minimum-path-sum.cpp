class Solution {
public:
int helper(int m, int n,vector<vector<int>>&grid,vector<vector<int>>&dp){
    if(m<0||n<0)return INT_MAX;
    if(m==0 and n==0)return grid[m][n];
    if(dp[m][n]!=-1)return dp[m][n];
    int up=helper(m-1,n,grid,dp);
    int left=helper(m,n-1,grid,dp);
    int sum1=(up==INT_MAX)?INT_MAX:grid[m][n]+up;
    int sum2=(left==INT_MAX)?INT_MAX:grid[m][n]+left;
    return dp[m][n]=min(sum1,sum2);
}
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
       return helper(m-1,n-1,grid,dp);
    }
};