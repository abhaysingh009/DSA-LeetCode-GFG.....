class Solution {
  public:
    int getFirstSetBit(int n) {
        // code here
        int count=0;
        while((n&1)==0){
            count++;
            n>>=1;
            
        }
    
        return count+1;
    }
};