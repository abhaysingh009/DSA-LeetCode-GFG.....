class Solution {
public:
    int trailingZeroes(int n) {
        int x=5;
        int total=0;
        while(true){
        int res=n/x;

            x*=5;
            total+=res;
            if(res==0){
                break;
            }
        }
        return total;
    }
};