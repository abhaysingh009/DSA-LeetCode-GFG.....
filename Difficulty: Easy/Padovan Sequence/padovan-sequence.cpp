
class Solution {
  public:
  long long M=1000000007;
  int helper(int n,vector<int>&dp){
      if(n<=2)return 1;
      if(dp[n]!=-1)return dp[n];
        return dp[n]=(helper(n-2,dp)%M + helper(n-3,dp)%M)%M;
  }
    int padovanSequence(int n) {
        vector<int>dp(n+1,-1);
        return helper(n,dp);
        
        
    }
};
