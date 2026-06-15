class Solution {
  public:
    int countOfElements(int x, vector<int> &arr) {
        int count=0;
        for(int i:arr){
            if(i<=x)count++;
        }
        return count;
        
    }
};