class Solution {
  public:
    bool checkElements(int start, int end, vector<int> &arr) {
        int count=end-start+1;
        for(int i:arr){
            if(i>= start and i<=end)count--;
        }
        return count==0;
        
    }
};
