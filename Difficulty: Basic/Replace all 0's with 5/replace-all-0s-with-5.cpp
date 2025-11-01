/*you are required to complete this method*/
class Solution {
  public:
    int convertFive(int n) {
        // Your code here
        if(n==0){return 5;}
        int rev=0;
        while(n!=0){
            int rem=n%10;
            if(rem==0){
                rem=5;
            }
            rev=rev*10+rem;
            n/=10;
        }
        
        n=rev;
            rev=0;
        while(n!=0){
            int rem=n%10;
            if(rem==0){
                rem=5;
            }
            rev=rev*10+rem;
            n/=10;
        }
        return rev;
    }
};