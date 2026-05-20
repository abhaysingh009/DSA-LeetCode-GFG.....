class Solution {
public:
 int helper(int i,int j,string &s1,string &s2,vector<vector<int>>&dp){
      if(i>=s1.size()||j>=s2.size())return 0;
      if(s1[i]==s2[j]) return 1+helper(i+1,j+1,s1,s2,dp);
      if(dp[i][j]!=-1)return dp[i][j];

      return dp[i][j]=max(helper(i+1,j,s1,s2,dp),helper(i,j+1,s1,s2,dp));
  }
    int longestPalindromeSubseq(string s) {
        string s1=s;
        vector<vector<int>>dp(s1.size(),vector<int>(s1.size(),-1));
        reverse(s.begin(),s.end());
         return helper(0,0,s1,s,dp);
        
    }
};