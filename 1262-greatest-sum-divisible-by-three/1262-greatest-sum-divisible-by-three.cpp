// class Solution {
// public:
// // greedy O(nlogn);
//     int maxSumDivThree(vector<int>& nums) {
//         vector<int>remainder1;
//         vector<int>remainder2;
//         int sum=0;
//         for(int i:nums){
//             if(i%3==1)remainder1.push_back(i);
//             else if(i%3==2)remainder2.push_back(i);
//             sum+=i;
//         }
//         sort(remainder1.begin(),remainder1.end());
//         sort(remainder2.begin(),remainder2.end());
//         int rem=sum%3;
//         if(rem==0)return sum;
//         int res=0;
//         if(rem==1){
//             int remove1=remainder1.size()>0?remainder1[0]:INT_MAX;
//             int remove2=remainder2.size()>1?remainder2[0]+remainder2[1]:INT_MAX;

//             res=max(res,sum-min(remove1,remove2));
//         }else{
//             int remove1=remainder1.size()>1?remainder1[0]+remainder1[1]:INT_MAX;
//             int remove2=remainder2.size()>0?remainder2[0]:INT_MAX;
//             res=max(res,sum-min(remove1,remove2));
//         }
//         return res;
//     }
// };

// dp====================================================================================
class Solution{
    public:
    int helper(vector<int>&nums,int rem,int i,vector<vector<int>>&dp){
        if(i>=nums.size()){
            if(rem==0)return 0;
            else return INT_MIN;
        }
        if(dp[i][rem]!=-1)return dp[i][rem];
        int take= nums[i]+helper(nums,(rem+nums[i])%3,i+1,dp);
        int notTake= helper(nums,rem,i+1,dp);
        return dp[i][rem]=max(take,notTake);
    }
    int maxSumDivThree(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(3,-1));
        return helper(nums,0,0,dp);
    

    }
};