// class Solution {
// public:
// int helper(vector<vector<int>>&arr,int i, int j,int xorVal,vector<vector<map<int,int>>>&dp){
//     int m=arr.size();
//     int n=arr[0].size();

//     if(i>=m or j>=n)return INT_MAX; 
//     xorVal^=arr[i][j];
//     if(i==m-1 and j==n-1)return xorVal; 
//     int ans=INT_MAX;

//     if(dp[i][j].count(xorVal)){
//         return dp[i][j][xorVal];
//     }
//     ans=min(ans, helper(arr, i+1,j,xorVal,dp));
//     ans=min(ans, helper(arr, i,j+1,xorVal,dp));
//     return dp[i][j][xorVal]=ans;
// }
//     int minCost(vector<vector<int>>& grid) {
//          int m=grid.size();
//          int n=grid[0].size();
//         vector<vector<map<int,int>>>dp(m,vector<map<int,int>>(n));
//      return helper(grid,0,0,0,dp);   
//     }
// };

class Solution {
public:
    static const int MAXX=1024;

    bitset<MAXX>helper(vector<vector<int>>& grid, int i, int j,
    vector<vector<bitset<MAXX>>>& dp,vector<vector<bool>>& vis) {
        int m=grid.size(),n=grid[0].size();

        if (i>=m||j>= n)
            return bitset<MAXX>();

        if (vis[i][j])
            return dp[i][j];

        vis[i][j]=true;

        if (i==0&&j==0) {
            dp[i][j].set(grid[i][j]);
            return dp[i][j];
        }

        if (i>0) {
            auto prev=helper(grid,i-1,j,dp, vis);

            for (int x = 0; x < MAXX; x++)
                if (prev[x])
                    dp[i][j].set(x^grid[i][j]);
        }

        if (j>0) {
            auto prev=helper(grid,i,j-1,dp,vis);

            for (int x=0; x<MAXX;x++)
                if (prev[x])
                    dp[i][j].set(x^grid[i][j]);
        }

        return dp[i][j];
    }

    int minCost(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();

        vector<vector<bitset<MAXX>>> dp(m,vector<bitset<MAXX>>(n));

        vector<vector<bool>> vis(m,vector<bool>(n,false));

        auto result=helper(grid,m-1,n-1,dp,vis);

        for (int x=0;x<MAXX;x++)
            if (result[x])return x;

        return -1;
    }
};