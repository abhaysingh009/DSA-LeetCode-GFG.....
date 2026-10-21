class Solution {
public:
double power(double a,long long b){
    if(b==0)return 1;

    double half=power(a,b/2);

    double res=half*half;

    if(b%2==1)res=a*res;;

    return res;

}
    double myPow(double x, int n) {
        //your code goes here
        
        if(n<0)return 1/power(x,1LL* -1 *n);
        return power(x,n);
    }
};