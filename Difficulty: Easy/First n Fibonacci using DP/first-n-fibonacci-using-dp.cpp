class Solution {
  public:
  # define cnt 1000000007
  int helper(int n,vector<int>&dp){
      if(n==0)return dp[0]=0;
      if(n==1)return dp[1]=1;
      if(dp[n]!=-1)return dp[n];
      return dp[n]=(helper(n-1,dp)%cnt+helper(n-2,dp)%cnt)%cnt;
  }
    vector<int> fibonacciNumbers(int n) {
        if(n==1)return {0,1};
        vector<int>dp(n+1,-1);
        helper(n,dp);
        return dp;
        
    }
};