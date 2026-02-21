// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        int count=0;
        for(int e:arr){
            if(e==0){
                count++;
            }
        }
        
        return count;
    }
};