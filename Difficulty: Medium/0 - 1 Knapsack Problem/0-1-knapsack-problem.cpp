class Solution {
  public:
  
  int knapsackRec(int W,vector<int> &val, vector<int> &wt, int i, vector<vector<int>>&dp) {
        if (i<0||W==0){
            return 0;
        }
        if(dp[i][W]!=-1)return dp[i][W];
        int pick=0;
        if (wt[i]<=W){
            pick=val[i]+knapsackRec(W-wt[i],val,wt,i-1,dp);
            
        }
        int notPick=knapsackRec(W,val,wt,i-1,dp);
         
        return dp[i][W]= max(pick,notPick);
      
  }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n=val.size();
        vector<vector<int>>dp(n+1,vector<int>(W+1,-1));
       return knapsackRec(W,val,wt,n-1,dp);
        
    }
};
                
            
        

            