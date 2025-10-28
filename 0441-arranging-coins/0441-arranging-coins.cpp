class Solution {
public:
    int arrangeCoins(int n) {
        int i=1;
        while(n>=0){
            n-=i;
            if(n<0){
                return i-1;
            }
            if(n==0){
                return i;
            }
            i++;

        }
        return 0;
    }
};
