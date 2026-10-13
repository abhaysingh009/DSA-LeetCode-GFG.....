class Solution {
public:
int mod=1e9+7;
long long power(int n,int x){
    if(x==0)return 1;
    long long half=power(n,x/2);
    long long res=half*half;
    if(x%2)res*=n;
    return res;
}
int helper(int n,int x,int i,vector<vector<int>>&dp){
    if(n==0)return 1;
    if(i>n)return 0;
    long long p=power(i,x);
    int take=0;
    if(dp[i][n]!=-1)return dp[i][n];
    if(p<=n){
        take=helper(n-p,x,i+1,dp);
    }
    int notTake=helper(n,x,i+1,dp);
    return dp[i][n]=(take%mod + notTake%mod)%mod;
}
    int numberOfWays(int n, int x) {
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return helper(n,x,1,dp);
    }
};