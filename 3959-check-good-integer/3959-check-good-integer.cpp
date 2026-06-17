class Solution {
public:
    bool checkGoodInteger(int n) {
        int sq=0;
        int sum=0;
        while(n>0){
            int rem=n%10;
            sq+=(rem*rem);
            sum+=rem;
            n/=10;
        }
        return (sq-sum)>=50;
    }
};