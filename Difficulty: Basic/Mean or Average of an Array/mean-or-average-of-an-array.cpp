class Solution {
  public:
    int findMean(vector<int>& arr) {
        int sum=0;
        for(int i:arr){
            sum+=i;
        }
        
        return floor(sum/arr.size());
    }
};