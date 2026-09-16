class Solution {
public:
long long mod=1e9+7;
long long power(long long n,long long x){
    if(x==0)return 1;
    int half=power(n,x/2);
    if(x%2==0){
        return (half%mod * half%mod)%mod;
    }else return (n%mod * half%mod * half%mod)%mod;
}
    int countGoodNumbers(long long n) {
        long long a=power(5,(n+1)/2);
        long long b=power(4,n/2);
        return (1LL*a%mod * b%mod)%mod;
        
    }
};