class Solution {
  public:
    int findMin(int n) {
        vector<int>arr={10,5,2,1};
        int ans=0;
        for(int i:arr){
            ans+=n/i;
            n=n%i;
        }
        return ans;
        
    }
};