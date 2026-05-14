class Solution {
  public:
  int helper(vector<int>&arr,int i,vector<int>&dp){
      if(i>=arr.size())return 0;
      if(dp[i]!=-1)return dp[i];
      int take=arr[i]+helper(arr,i+2,dp);
      int notTake=helper(arr,i+1,dp);
      return dp[i]=max(take,notTake);
  }
    int findMaxSum(vector<int>& arr) {
        vector<int>dp(arr.size()+1,-1);
        return helper(arr,0,dp);
        
    }
};