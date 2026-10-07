class Solution {
public:
int helper(vector<int>&arr,int am,vector<int>&dp){
    if(am==0)return 0;

    if(am<0)return INT_MAX;
    if(dp[am]!=-1)return dp[am];
    int temp=INT_MAX;
    int ans=0;
    for(int i=0;i<arr.size();i++){
       int ans=helper(arr,am-arr[i],dp);
       if(ans!=INT_MAX){
        temp=min(temp,1+ans);
       }
    }
    return dp[am]=temp;

}
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,-1);
        int ans=helper(coins,amount,dp);
        if(ans==INT_MAX){
            return -1;
        }
        return ans;

        
    }
};