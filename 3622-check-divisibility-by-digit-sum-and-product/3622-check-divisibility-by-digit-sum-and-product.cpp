class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int pr=1;
        int x=n;
        while(n>0){
            int rem=n%10;
            sum+=rem;
            pr*=rem;
            n/=10;
        }
        return x%(pr+sum)==0;
    }
};