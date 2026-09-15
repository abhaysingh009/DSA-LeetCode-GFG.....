class Solution {
public:
double power(double x, long long n){
    if(n==0) return 1;
    double half=power(x,n/2);
    if(n%2==0)return half*half;
    else return x*half*half;
}
    double myPow(double x, int n) {
        if(n>=0)return power(x,n);
        return 1/power(x,1LL*n*-1);
    }
};