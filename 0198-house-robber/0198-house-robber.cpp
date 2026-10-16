class Solution {
public:
int tabulation(vector<int>&nums){
    int n=nums.size();
    vector<int>dp(n,0);
    dp[0]=nums[0];
    if(n>1)
    dp[1]=max(nums[0],nums[1]);
    for(int i=2;i<n;i++){
        dp[i]=max(dp[i-1],nums[i]+dp[i-2]);
    }
    return dp[n-1];
}
    int helper(vector<int>&nums,int i,int n){
        if(i>=n)return 0;

        int take=nums[i]+helper(nums,i+2,n);
        int notTake=helper(nums,i+1,n);
        return max(take,notTake);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        // return helper(nums,0,n);
        return tabulation(nums);
    }
};