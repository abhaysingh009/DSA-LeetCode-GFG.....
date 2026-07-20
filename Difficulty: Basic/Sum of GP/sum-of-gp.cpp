class Solution {
  public:
    int sumOfGP(int n, int a, int r) {
        if(r==1)return n*a;
        long long temp=a*(pow(r,n)-1);
        return temp/(r-1);
        
    }
};