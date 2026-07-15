class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd=0;
        int sumEven=0;
        int i=1;
        while(n--){
            sumEven+=2*i;
            sumOdd+=(2*i-1);
            i++;

        }
        return gcd(sumOdd,sumEven);
        
    }
};