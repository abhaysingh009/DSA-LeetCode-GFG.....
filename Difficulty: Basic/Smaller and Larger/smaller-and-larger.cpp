// User function template for C++
class Solution {
  public:
    vector<int> getMoreAndLess(vector<int> &arr, int target) {
        int x=0;
        int y=0;
        for(int e:arr){
            if(e<=target){
                x++;
            }
            if(e>=target){
                y++;
            }
        }
        return {x,y};
        
    }
};