class Solution {
public:
int dp[1002][1002];
int helper(string &s1,string &s2, int m,int n){
    if(m<0 or n<0)return 0;

    if(dp[m][n]!=-1)return dp[m][n];
    if(s1[m]==s2[n]) return dp[m][n]=1+ helper(s1,s2,m-1,n-1);
    else {
        return dp[m][n]=max(helper(s1,s2,m,n-1),helper(s1,s2,m-1,n));
    }
}
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size();
        int n=text2.size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                dp[i][j]=-1;
            }
        }
        return helper(text1,text2,text1.size()-1,text2.size()-1);
    }
};