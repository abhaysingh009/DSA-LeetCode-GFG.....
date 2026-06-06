class Solution {
public:
int helper(string &s1,string &s2,int m,int n,vector<vector<int>>&dp ){
    if(m<0 or n<0)return 0;

    if(dp[m][n]!=-1)return dp[m][n];
    if(s1[m]==s2[n]) return dp[m][n]=1+ helper(s1,s2,m-1,n-1,dp);
    return dp[m][n]=max(helper(s1,s2,m,n-1,dp),helper(s1,s2,m-1,n,dp));
}
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size()-1;
        int n=text2.size()-1;
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return helper(text1,text2,m,n,dp);
    }
};