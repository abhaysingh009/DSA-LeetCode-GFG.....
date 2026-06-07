class Solution {
public:
 int helper(int i,int j,string &s1,string &s2,vector<vector<int>>&dp){
      if(i<0 ||j<0)return 0;

      if(dp[i][j]!=-1)return dp[i][j];
      if(s1[i]==s2[j]) return 1+helper(i-1,j-1,s1,s2,dp);

      return dp[i][j]=max(helper(i-1,j,s1,s2,dp),helper(i,j-1,s1,s2,dp));
  }
    int longestPalindromeSubseq(string s) {
        string s1=s;
        int m=s.size();
        vector<vector<int>>dp(m,vector<int>(m,-1));
        reverse(s.begin(),s.end());

         return helper(m-1,m-1,s1,s,dp);
        
    }
};