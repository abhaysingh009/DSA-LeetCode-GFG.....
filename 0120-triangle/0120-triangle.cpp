class Solution {
public:
#define IM INT_MAX
int helper(int i,int j,vector<vector<int>>&arr,int m,vector<vector<int>>&dp){
    if(i== m-1)return arr[i][j];
    if(dp[i][j]!=IM)return dp[i][j];
    int x=helper(i+1,j,arr,m,dp);
    int y=helper(i+1,j+1,arr,m,dp);
    return dp[i][j]=arr[i][j]+min(x,y);
}
    int minimumTotal(vector<vector<int>>& arr) {
        vector<vector<int>>dp(arr.size(),vector<int>(arr.size(),IM));
        return helper(0,0,arr,arr.size(),dp);
    }
};