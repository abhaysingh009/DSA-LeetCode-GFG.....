class Solution {
public:
    int smallestNumber(int n) {
        int x=1;
        do{
            x*=2;

        }while(x<=n);
        return x-1;
        
    }
};