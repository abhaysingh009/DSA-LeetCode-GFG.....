class Solution {
public:
    long long sumAndMultiply(int n) {
        long long temp=0;
        int sum=0;
        int place=1;
        while(n>0){
            int rem=n%10;
            sum+=rem;
            if(rem!=0){
                temp+=rem*place;
                place*=10;
            }
            n/=10;


        }
        return temp*sum;

        
    }
};