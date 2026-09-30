class Solution {
public:
int helper(int i,int j,vector<int>&nums,vector<vector<int>>&dp){
    if(i>j)return 0;
    if(i==j)return nums[i];
    if(dp[i][j]!=-1)return dp[i][j];
    int takeI=nums[i]+min(helper(i+2,j,nums,dp),helper(i+1,j-1,nums,dp));
    int takeJ=nums[j]+min(helper(i,j-2,nums,dp),helper(i+1,j-1,nums,dp));
    return dp[i][j]= max(takeI,takeJ);

}
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int temp=helper(0,nums.size()-1,nums,dp);
        int sum=0;
        for(int i:nums)sum+=i;
        return temp>=(sum-temp);

        
    }
};