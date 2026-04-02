class Solution {
  public:
    int countOnes(vector<int>& arr) {
        int ans=0;
        for(int i: arr){
            if(i==1){
                ans++;
            }
        }
    return ans;        
    }
};