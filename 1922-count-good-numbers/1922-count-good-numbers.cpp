class Solution {
public:
    const long long M = 1000000007;
long long power(long long a ,long long b){
    long long ans=1;
    while(b>0){
        if(b&1){
           ans=(ans*a)%M;
        }
        a=(a*a)%M;
        b>>=1;
    }
    return ans;
}

    int countGoodNumbers(long long n) {
       int e=5;
       int p=4;
       long long  b=n/2;
       if(n%2!=0)b=(n-(n/2));
       long long even=power(e,b);
       long long prime=power(p,n/2);
       long long ans=(even%M * prime%M) %M;
       return ans;
    }
};