// User function Template for C++
class Solution {
  public:
    long long int isPerfectSquare(long long int num) {
        
        long i=1;
        while(i*i<=num){
            if(i*i==num){
                return true;
            }
            i++;

        }
        return false;
        
        
    }
};