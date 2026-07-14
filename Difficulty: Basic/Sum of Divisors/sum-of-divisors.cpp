class Solution {
  public:
    long long int divSum(int n) {
        long long sum=0;
       for(int i=1;i*i<=n;i++){
           if(n%i==0){
               sum+=i;
               if(i!=1 and (n/i)!=i){
                 sum+=n/i;
               }
           }
       }
       return sum;
        
    }
};