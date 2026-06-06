class Solution {
  public:
  int ans=0;
int solve(int i, int j,string &s1,string &s2,vector<vector<int>> &dp)
{
    if(i < 0 || j < 0)
        return 0;

    if(dp[i][j] != -1)
        return dp[i][j];

    // Explore all states
    solve(i - 1, j, s1, s2, dp);
    solve(i, j - 1, s1, s2, dp);

    if(s1[i] == s2[j])
    {
        dp[i][j] = 1 + solve(i - 1, j - 1, s1, s2, dp);
        ans = max(ans, dp[i][j]);
    }
    else
    {
        dp[i][j] = 0;
    }

    return dp[i][j];
}

    int longCommSubstr(string& s1, string& s2) {
        int m=s1.size()-1;
        int n=s2.size()-1;
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        solve(m,n,s1,s2,dp);
       return ans ;
        
    }
};