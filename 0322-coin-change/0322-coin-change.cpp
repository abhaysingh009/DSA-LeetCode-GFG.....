class Solution {
public:
    int helper(vector<int>&coins,int am,vector<int>&dp){
        if(am==0)return 0;
        // if(am<0)return INT_MAX;
        int ans=INT_MAX;
        if(dp[am]!=-1)return dp[am];
        for(int i=0;i<coins.size();i++){
            if(coins[i]<=am){
               int temp=helper(coins,am-coins[i],dp);
               if(temp!=INT_MAX)
                ans=min(ans,temp+1);
            }
        }
        return dp[am]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,-1);
        int temp=helper(coins,amount,dp);
        return temp==INT_MAX?-1:temp;
    }
};