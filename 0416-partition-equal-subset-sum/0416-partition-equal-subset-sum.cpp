class Solution {
public:
  bool helper(vector<int>&arr, int cap, int i,vector<vector<int>>&dp){
      
      if(cap==0) return 1;
      if(i<0) return 0;
      
      
      if(dp[i][cap]!=-1) return dp[i][cap];
      
      int take=0;
      if(arr[i]<=cap){
          take=helper(arr,cap-arr[i],i-1,dp);
      }
      int notTake=helper(arr,cap,i-1,dp);
      
      return dp[i][cap] = take or notTake;
  }
    bool canPartition(vector<int>& arr) {
    
        int sum=accumulate(arr.begin(),arr.end(),0);
        if(sum%2)return 0;

        int cap=sum/2;
        vector<vector<int>>dp(arr.size()+1,vector<int>(cap+1,-1));
      return  helper(arr,cap,arr.size()-1,dp);
      
        
    }
};