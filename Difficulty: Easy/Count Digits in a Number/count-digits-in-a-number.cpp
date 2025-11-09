class Solution {
  public:
    int countDigits(int n) {
        // Code here
         int x=0;
        while(n!=0){
        
            n/=10;
            x++;
        }
        return x;
    }
};