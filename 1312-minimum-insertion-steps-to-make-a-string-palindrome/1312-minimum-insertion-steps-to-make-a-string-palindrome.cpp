class Solution {
public:
int helper(int i,int j,string &s1, string &s2,vector<vector<int>>&dp){
    if(i>=s1.size() or j>=s2.size()) return 0;
    if(s1[i]==s2[j])return 1+helper(i+1,j+1,s1,s2,dp);
    if(dp[i][j]!=-1)return dp[i][j];
    return dp[i][j]=max(helper(i+1,j,s1,s2,dp),helper(i,j+1,s1,s2,dp));
}
    int minInsertions(string s) {
        string s1=s;
        reverse(s1.begin(),s1.end());
        vector<vector<int>>dp(s.size(),vector<int>(s.size(),-1));
        int x=helper(0,0,s1,s,dp);
        return s.size()-x;
        
    }
};