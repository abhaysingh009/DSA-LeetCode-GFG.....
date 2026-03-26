class Solution {
  public:
    // arr[] is the array
    long long int product(vector<int> &arr) {
        long long x=1;
        for(long long w:arr){
            x*=w;
            x=x%1000000007;
        }
        return x;
        
    }
};