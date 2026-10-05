class Solution {
public:
int helper(vector<vector<int>>&mat,int i, int j,int prev,vector<vector<int>>&dp){
    int m=mat.size();
    int n=mat[0].size();
    if(i<0 or i>=m or j>=n)return 0;
    if(mat[i][j]<=prev)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int f1=helper(mat,i-1,j+1,mat[i][j],dp);
    int f2=helper(mat,i,j+1,mat[i][j],dp);
    int f3=helper(mat,i+1,j+1,mat[i][j],dp);

    return dp[i][j]=1+max(f1,max(f2,f3));

}
    int maxMoves(vector<vector<int>>& grid) {
        int ans=1;
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
       for(int i=0;i<grid.size();i++){
        ans=max(ans,helper(grid,i,0,0,dp));
       }
       return ans-1;
    }
};