class Solution {
public:
int LCS(string &s1,string &s2,int m, int n,vector<vector<int>>&dp){

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }else {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    // for(int i=0;i<m+1;i++){
    //     for(int j=0;j<n+1;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    return dp[m][n];
}
    int longestPalindromeSubseq(string s) {
        int m=s.size();
        vector<vector<int>>dp(m+1,vector<int>(m+1,0));
        string temp=s;
        reverse(s.begin(),s.end());

       return LCS(s,temp,m,m,dp);

    }
};