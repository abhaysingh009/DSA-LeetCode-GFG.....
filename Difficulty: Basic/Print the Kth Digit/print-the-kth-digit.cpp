class Solution {
  public:
    int kthDigit(int a, int b, int k) {
        long long p=pow(a,b);
        int rem=0;
        while(p>0 and k--){
            rem=p%10;
            p/=10;
            
        }
        return rem;
        
    }
};