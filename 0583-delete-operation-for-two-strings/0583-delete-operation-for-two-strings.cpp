class Solution {
public:
int helper(string &s1, string &s2,int m,int n,vector<vector<int>>&dp){
    if(m<0 or n<0)return 0;
    if(dp[m][n]!=-1)return dp[m][n];
    if(s1[m]==s2[n])return 1+helper(s1,s2,m-1,n-1,dp);
    return dp[m][n]=max(helper(s1,s2,m,n-1,dp),helper(s1,s2,m-1,n,dp));
}
    int minDistance(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int x=helper(word1,word2,m-1,n-1,dp);
        int ans=(m-x)+(n-x);
        return ans;
        
    }
};