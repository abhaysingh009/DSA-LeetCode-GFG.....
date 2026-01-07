class Solution {
  public:
    bool isPerfect(int n) {
        int sum=0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                int x=n/i;
                sum+=i;
                if(x!=i and x!=n){
                sum+=x;
                }
            }
        }
        return sum==n;
    }
};