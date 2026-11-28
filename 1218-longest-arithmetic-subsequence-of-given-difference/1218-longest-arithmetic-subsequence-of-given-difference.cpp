// class Solution {
// public:
// int ans=0;
// int helper(vector<int>&arr,int i,int last,int diff,vector<vector<int>>&dp){
//         if(i>=arr.size())return 0;
//         if(dp[i][last+1]!=-1)return dp[i][last+1];
//         int skip=helper(arr,i+1,last,diff,dp);
//         int take=0;

//         if(last==-1 or (arr[i]-arr[last])==diff){
//             take= 1+helper(arr,i+1,i,diff,dp);
//         }
//         return dp[i][last+1]=max(skip,take);
// }
//     int longestSubsequence(vector<int>& arr, int difference) {
//         int n=arr.size();
//         vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
//         return helper(arr,0,-1,difference,dp);
//     }
// };

class Solution {
public:
    int longestSubsequence(vector<int>&arr,int diff){
        // int n=arr.size();
        // vector<vector<int>>dp(n+1,vector<int>(n+1,0));

        // for(int i=n-1;i>=0;i--){
        //     for(int last=-1;last<i;last++){
        //         int skip=dp[i+1][last+1];
        //         int take=0;
        //         if(last==-1 or (arr[i]-arr[last])==diff){
        //                 take=1+dp[i+1][i+1];
        //         }
        //         dp[i][last+1]=max(take,skip);

        //     }
        // }
        // return dp[0][0];

        unordered_map<int,int>dp;
        int ans=0;
        for(int i:arr){
            dp[i]=dp[i-diff]+1;
            ans=max(dp[i],ans);
        }
        return ans;


    }
};