class Solution {
  public:

int helper(int n, vector<int>& price,vector<int>&dp) {
    // base case
    if(n == 0)
        return 0;

    int ans = 0;

    // try every cut length
    if(dp[n]!=-1)return dp[n];
    for(int cut = 1; cut <= n; cut++) {
        int current = price[cut-1] + helper(n-cut, price,dp);
        ans = max(ans, current);
    }

    return dp[n]=ans;
}
    int cutRod(vector<int> &price) {
        int n=price.size();
        vector<int>dp(n+1,-1);
        return helper(price.size(),price,dp);
        
    }
};