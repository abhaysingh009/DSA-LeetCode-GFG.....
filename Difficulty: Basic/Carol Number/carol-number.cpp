class Solution {
  public:
    int nthCarol(int n) {
        int x=pow(2,n)-1;
        x*=x;
        return x-2;
        
    }
};