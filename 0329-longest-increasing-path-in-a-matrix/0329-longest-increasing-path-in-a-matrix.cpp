class Solution {
public:
int helper(vector<vector<int>>&mat,int i,int j,vector<vector<int>>&dp){
    int m=mat.size();
    int n=mat[0].size();

    if(dp[i][j]!=-1)return dp[i][j];
    int f1=0,f2=0,f3=0,f4=0;
    if(i+1<m and mat[i][j]<mat[i+1][j])
     f1 =helper(mat,i+1,j,dp);

    if(j+1<n and mat[i][j]<mat[i][j+1])
     f2 =helper(mat,i,j+1,dp);

    if(i-1>=0 and mat[i][j]<mat[i-1][j])
     f3 =helper(mat,i-1,j,dp);

    if(j-1>=0 and mat[i][j]<mat[i][j-1])
     f4 =helper(mat,i,j-1,dp);

     return dp[i][j]= 1+max(f1,max(f2,max(f3,f4)));
}
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int ans=0;
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans=max(ans,helper(matrix,i,j,dp));
            }
        }
        return ans;
    }
};