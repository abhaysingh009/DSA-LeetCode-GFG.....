class Solution {
  public:
  int helper(vector<int>&arr,int i,int n,vector<int>&dp){
      if(i==n-1) return 0;
      if(dp[i]!=-1)return dp[i];
      int one=abs(arr[i]-arr[i+1])+helper(arr,i+1,n,dp);
      
      int two=INT_MAX;
      if(i+2<=n-1)
      two=abs(arr[i]-arr[i+2])+helper(arr,i+2,n,dp);
      
      return dp[i]=min(one,two);
  }
    int minCost(vector<int>& height) {
        // Code here
        int n=height.size();
        vector<int>dp(n,-1);
        return helper(height,0,n,dp);
        
    }
};