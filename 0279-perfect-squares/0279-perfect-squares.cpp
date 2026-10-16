class Solution {
public:
int tabulation(int n){
    vector<int>dp(n+1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        int ans=INT_MAX;
        for(int j=1;j*j<=i;j++){
            int temp=1+dp[i-j*j];
            ans=min(temp,ans);
        }
        dp[i]=ans;
    }
    return dp[n];


}
// time n ^ root n memo= nrootn  
int helper(int n,vector<int>&dp){
    if(n==0)return 0;
    int ans=INT_MAX;
    if(dp[n]!=-1)return dp[n];
    for(int i=1;i*i<=n;i++){
        int temp=1+helper(n-i*i,dp);
        ans=min(ans,temp);
    }
    return dp[n]=ans;
}
    int numSquares(int n) {
        vector<int>dp(n+1,-1);

        // int x= helper(n,dp);
        return tabulation(n);
        
    }
};