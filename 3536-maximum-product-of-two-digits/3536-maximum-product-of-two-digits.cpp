class Solution {
public:
    int maxProduct(int n) {
        
        int firstMax=INT_MIN;
        int secondMax=INT_MIN;
        while(n>0){
            int rem=n%10;
            if(rem>firstMax){
                secondMax=firstMax;
                firstMax=rem;
            }
            else if(rem>secondMax){
                secondMax=rem;
            }
            n/=10;
        }
        return firstMax*secondMax;
    }
};