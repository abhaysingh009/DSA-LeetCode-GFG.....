class Solution {
  public:
    int coin(vector<int>& arr) {
        int small=10000000;
        for(int i:arr){
            small=min(i,small);
        }
        return small;
    }
};