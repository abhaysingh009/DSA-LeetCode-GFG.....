class Solution {
public:

int helper(vector<vector<int>>&mat,int r1,int r2,int c1,vector<vector<vector<int>>>&dp){
    int m=mat.size();
    int n=mat[0].size();
    int c2=r1+c1-r2;
    if(r1>=m or r2>=m or c1>=n or c2>=n)return INT_MIN;
    if(mat[r1][c1]==-1 or mat[r2][c2]==-1)return INT_MIN;
    if(r1==m-1 and c1==n-1)return mat[r1][c1];

    int ans=0;
    ans+=mat[r1][c1];
    if(r1!=r2){
        ans+=mat[r2][c2];
    }
    if(dp[r1][c1][r2]!=-1)return dp[r1][c1][r2];
    int f1= helper(mat,r1,r2,c1+1,dp);
    int f2= helper(mat,r1,r2+1,c1+1,dp);
    int f3= helper(mat,r1+1,r2,c1,dp);
    int f4= helper(mat,r1+1,r2+1,c1,dp);
    int temp=max(f1,max(f2,max(f3,f4)));
    ans+=temp;
    return dp[r1][c1][r2]= ans;


}
    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(n,vector<int>(n,-1)));
        return max(0,helper(grid,0,0,0,dp));
    }
};