class Solution {
public:
int helper(vector<int>&arr,vector<int>&dp,int i,int n,int &sum,int sum2=0){
    if(i>=n)return sum;
    if(dp[i]!=-1)return dp[i];
    sum=sum+arr[i] +helper(arr,dp,i+2,n,sum);
    sum2=sum2+helper(arr,dp,i+1,n,sum2);
    
    return dp[i]=max(sum,sum2);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        int sum=0;
        return helper(nums,dp,0,n,sum);
        
    }
};