class Solution {
  public:
  
  int helper(int W,vector<int> &val, vector<int> &wt, int n, vector<vector<int>>&dp) {
        if (n==0||W==0){
            return 0;
        }
        if(dp[n][W]!=-1)return dp[n][W];
        int pick=0;
        
        if (wt[n-1]<=W){
            pick=val[n-1]+helper(W-wt[n-1],val,wt,n-1,dp);
            
        }
        int notPick=helper(W,val,wt,n-1,dp);
         
        return dp[n][W]=max(pick,notPick);
      
  }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n=val.size();
        vector<vector<int>>dp(n+1,vector<int>(W+1,-1));
       return helper(W,val,wt,n,dp);
        
    }
};
                
            
        

            