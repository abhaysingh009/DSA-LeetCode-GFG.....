class Solution {
  public:
  int helper(vector<int>& coins, int n,int sum,vector<vector<int>>&dp){
      if(sum==0)return 1;
      if(sum<0 ||n==0)return 0;
      if(dp[n-1][sum]!=-1)return dp[n-1][sum];
      return dp[n-1][sum]=helper(coins,n,sum-coins[n-1],dp)+helper(coins,n-1,sum,dp);
      
  }
    int count(vector<int>& coins, int sum) {
        int n=coins.size();
        
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        return helper(coins, n,sum,dp);
    }
};