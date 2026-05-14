class Solution {
public:
int helper(vector<int>&cost,int i,int n,vector<int>&dp){
    if(i>=n)return 0;
    if(dp[i]!=-1)return dp[i];
    int step1=cost[i]+helper(cost,i+1,n,dp);
    int step2=cost[i]+helper(cost,i+2,n,dp);
    return dp[i]=min(step1,step2);
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        return min(helper(cost,0,n,dp),helper(cost,1,n,dp));
        
    }
};