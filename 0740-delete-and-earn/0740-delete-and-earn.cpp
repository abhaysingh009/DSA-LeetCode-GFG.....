class Solution {
public:
int helper(int i, vector<int>&nums,vector<int>&dp){
    if(i>=nums.size())return 0;
    if(dp[i]!=-1)return dp[i];
    int take=nums[i]+helper(i+2,nums,dp);
    int notTake=helper(i+1,nums,dp);
    return dp[i]=max(take,notTake);
   
}
    int deleteAndEarn(vector<int>& nums) {
      int n=*max_element(nums.begin() ,nums.end());
        vector<int>maximumArr(n+1,0);
        vector<int>dp(n+1,-1);
        for(int i:nums){
            maximumArr[i]+=i;
        }

        return helper(0,maximumArr,dp);
    }

};