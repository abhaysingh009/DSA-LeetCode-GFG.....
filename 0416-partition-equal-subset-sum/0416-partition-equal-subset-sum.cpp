class Solution {
public:
bool helper(vector<int>&arr,int i,int cap,vector<vector<int>>&dp){
    if(cap==0)return 1;
    if(i>=arr.size())return 0;
    if(dp[i][cap]!=2)return dp[i][cap];

    int take=0;
    if(cap>=arr[i])
    take =helper(arr,i+1,cap-arr[i],dp);

    int notTake=helper(arr,i+1,cap,dp);
    return dp[i][cap]=take|| notTake;
}
    
bool canPartition(vector<int>& nums) {
        int sum=0;

        for(int i:nums)sum+=i;
        if(sum%2)return 0;
        int cap=sum/2;
        vector<vector<int>>dp(nums.size()+1,vector<int>(cap+1,2));
        return helper(nums,0,cap,dp);
        
    }
};
    
