class Solution {
public:
set<int>st;
  void helper(vector<int>&arr,int i,int sum,vector<vector<int>>&dp){
      if(i<0){
          if(sum!=0)
          st.insert(sum);
          return;
      }
      if(dp[i][sum]!=-1)return ;
      dp[i][sum]=1;
      helper(arr,i-1,sum+arr[i],dp);
      helper(arr,i-1,sum,dp);
  }
    int lastStoneWeightII(vector<int>& arr) {
        int n=arr.size();
        if(n==1)return arr[0];
        st.clear();
        int total=accumulate(arr.begin(),arr.end(),0);
         vector<vector<int>>dp(n,vector<int>(total+1,-1));
        helper(arr,n-1,0,dp);
       
       int ans=INT_MAX;
       for(int i:st){
           ans=min(ans,abs(total-2*i));
       }
        return ans;
    }
};