class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        int x=n;
        int count=0;
        while(n>0){
            int rem=n%10;
            if(rem!=0 and x%rem==0){
                count++;
                
            }
            n/=10;
        }
        return count;
        
    }
};