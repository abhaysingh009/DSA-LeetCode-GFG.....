class Solution {
  public:
  int helper(int n){
      if(n==0)return 0;
      int sum=helper(n/2)+helper(n/3)+helper(n/4);
      return max(n,sum);
      
  }
    int maxSum(int n) {
        return helper(n);
    }
};