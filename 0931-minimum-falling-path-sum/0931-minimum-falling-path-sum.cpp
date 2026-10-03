class Solution {
public:
int helper(int i,int j,vector<vector<int>>&mat,vector<vector<int>>&dp){
    int m=mat.size();int n=mat[0].size();
    if(i>=m or j>=n or j<0) return INT_MAX;
    if(i==m-1)return mat[i][j];

    if(dp[i][j]!=-101)return dp[i][j];

    int f=helper(i+1,j-1,mat,dp);
    int f1=helper(i+1,j,mat,dp);
    int f2=helper(i+1,j+1,mat,dp);

    return dp[i][j]=mat[i][j]+min(f,min(f1,f2));
}
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans=INT_MAX;
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-101));
        for(int i=0;i<matrix[0].size();i++){
        ans=min(ans,helper(0,i,matrix,dp)); 
        }
        return ans;

    }
};
