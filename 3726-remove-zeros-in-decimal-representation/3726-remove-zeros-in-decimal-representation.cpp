class Solution {
    #define ll long long
public:
    long long removeZeros(long long n) {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        if(n<10)return n;
        ll place=1;
        ll ans=0;
        while(n>0){
            int rem=n%10;
            if(rem!=0){
                ans=rem*place+ans;
                place*=10;
            }
            n/=10;
        }
        return ans;
        
    }
};