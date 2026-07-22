class Solution {
public:
int x=-100000;
int helper(int i,int j,vector<int>&nums,vector<vector<int>>&dp){
    if(j>=nums.size())return 0;
    int take =0;
    if(dp[i+1][j]!=x)return dp[i+1][j];
    if(i==-1||nums[i]<nums[j])
        take=1+helper(j,j+1,nums,dp);
    int nottake= helper(i,j+1,nums,dp);
    return dp[i+1][j]=max(take,nottake);

}
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n,x));
        return helper(-1,0,nums,dp);
        
    }
};
