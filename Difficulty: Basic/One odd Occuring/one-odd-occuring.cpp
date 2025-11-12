class Solution {
  public:
    int getOddOccurrence(vector<int>& arr) {
        int res=0;
        for(int e:arr){
            res^=e;
        }
        return res;
        
    }
};