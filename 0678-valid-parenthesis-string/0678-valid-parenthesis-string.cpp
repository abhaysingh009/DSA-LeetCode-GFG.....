class Solution {
public:
bool helper(int i, int open, string s,int n,vector<vector<int>>&dp){
        if(i==n)return open==0;

        bool isValid=0;
        if(dp[i][open]!=-1)return dp[i][open];
    if(s[i]=='('){
       isValid |= helper(i+1,open+1,s,n,dp);
    }else if(s[i]=='*'){
        isValid |= helper(i+1,open+1,s,n,dp);
        isValid |= helper(i+1,open,s,n,dp);
        if(open>0){
            isValid|= helper(i+1,open-1,s,n,dp);
        }
    }else{
        if(open>0){
            isValid |= helper(i+1,open-1,s,n,dp);
        }
    }
    return dp[i][open]=isValid;
}


    bool checkValidString(string s) {
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return helper(0,0,s,n,dp);
    }
};