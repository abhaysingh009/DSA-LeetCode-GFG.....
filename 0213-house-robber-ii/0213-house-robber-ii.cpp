class Solution {
public:
int helper(vector<int>&nums,int i,int n,vector<int>&dp){
        if(i>=n)return 0;

        if(dp[i]!=-1)return dp[i];
        int take=nums[i]+helper(nums,i+2,n,dp);
        int notTake=helper(nums,i+1,n,dp);
        return dp[i]=max(take,notTake);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp1(n,-1);
        vector<int>dp2(n,-1);
        if(n==1)return nums[0];
      return max(helper(nums,0,n-1,dp1),
        helper(nums,1,n,dp2));
        
    }
};