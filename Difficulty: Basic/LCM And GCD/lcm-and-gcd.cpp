class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        int gcd=-1;
        int lcm=-1;
        for(int i=1;i<=min(a,b);i++){
            if(a%i==0 and b%i==0 ){
                gcd=i;
            }
        }
        lcm=a*b/gcd;
        return{lcm,gcd};
        
    }
};