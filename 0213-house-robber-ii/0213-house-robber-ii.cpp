class Solution {
public:
int tabulation(vector<int>&nums){
    int n=nums.size();
    vector<int>dp1(n,0);
    vector<int>dp2(n,0);
    dp1[0]=nums[0];
    dp1[1]=max(nums[0],nums[1]);
    for(int i=2;i<n-1;i++){
        dp1[i]=max(dp1[i-1],nums[i]+dp1[i-2]);
    }
    dp2[1]=nums[1];
    dp2[2]=max(nums[2],nums[1]);
    for(int i=3;i<n;i++){
        dp2[i]=max(dp2[i-1],nums[i]+dp2[i-2]);
    }
    return max(dp1[n-2],dp2[n-1]);
}
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
        if(n==2)return max(nums[0],nums[1]);
        // return max(helper(nums,0,n-1,dp1),
        // helper(nums,1,n,dp2));
        return tabulation(nums);
        
    }
};