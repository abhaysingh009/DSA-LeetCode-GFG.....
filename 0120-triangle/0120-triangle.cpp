class Solution {
public:
#define IM INT_MAX
int helper(int i,int j,int m,vector<vector<int>>& triangle,vector<vector<int>>&dp){
    if(i==m-1)return triangle[i][j];
    if(dp[i][j]!=1e9)return dp[i][j];
    int x=helper(i+1,j,m,triangle,dp);
    int y=helper(i+1,j+1,m,triangle,dp);
    
    return dp[i][j]=triangle[i][j]+min(x,y);
}
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        vector<vector<int>>dp(m,vector<int>(m,1e9));
        return helper(0,0,triangle.size(),triangle,dp);
        
    }
};
