class Solution {
  public:
    int findUnique(vector<int> &arr) {
       int x=0;
       for(int i:arr){
           x^=i;
       }
       return x;
        
    }
};