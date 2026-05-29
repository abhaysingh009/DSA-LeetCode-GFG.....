
class Solution {
  public:
  int helper(int n,vector<int>&dp){
      if(n<0)return 0;
      if(n==0)return 1;
      if(dp[n]!=-1)return dp[n];
      return dp[n]=helper(n-1,dp)+helper(n-3,dp)+helper(n-4,dp);
      
  }
    int countWays(int n) {
        vector<int>dp(n+1,-1);
        return helper(n,dp);
        
    }
};