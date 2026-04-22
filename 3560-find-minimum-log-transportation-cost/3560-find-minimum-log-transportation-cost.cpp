class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        if(m<=k and n<=k)return 0;
        long long cost=0;
        if(m>k){
            long long x=m-k;
            cost=cost+x*k;
        }
        if(n>k){
             long long x=n-k;
            cost=cost+x*k;
        }
        return cost;

        
    }
};