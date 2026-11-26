class Solution {
  public:
  bool helper(string &s1, string &s2, int i, int j,vector<vector<int>>&dp){
      if(i<0 and j<0)return 1;
      if(j<0 and i>=0)return 0;
      if(i<0 and j>=0){
          for(int a=0;a<=j;a++){
              if(s2[a]!='*')return 0;
          }
          return 1;
      }
      if(dp[i][j]!=-1)return dp[i][j];
      
      if(s1[i]==s2[j] or s1[i]=='?' or s2[j]=='?')return dp[i][j]=helper(s1,s2,i-1,j-1,dp);
      
      else if(s1[i]!='*' and s2[j]!='*')return dp[i][j]=0;
      
      return dp[i][j]=helper(s1,s2,i-1, j,dp) || helper(s1,s2,i, j-1,dp);
  }
    bool isMatch(string &txt, string &pat) {
        // code here
        // int i=txt.size();
        // int j=pat.size();
        // vector<vector<int>>dp(i+1,vector<int>(j+1,-1));
        // return helper(txt,pat,i-1,j-1,dp);
        
        // tabulation
        
        int n=txt.size();
        int m=pat.size();
        vector<vector<bool>>dp(n+1,vector<bool>(m+1,false));
        dp[0][0]=true;
        
        for(int j=1;j<=m;j++){
            if(pat[j-1]=='*'){
                dp[0][j]=dp[0][j-1];
            }
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                
                if(txt[i-1]==pat[j-1] or pat[j-1]=='?'){
                    dp[i][j]=dp[i-1][j-1];
                    
                }else if(pat[j-1]=='*'){
                    dp[i][j]=dp[i-1][j] or dp[i][j-1];
                }
            }
        }
        return dp[n][m];
        
    }
};
