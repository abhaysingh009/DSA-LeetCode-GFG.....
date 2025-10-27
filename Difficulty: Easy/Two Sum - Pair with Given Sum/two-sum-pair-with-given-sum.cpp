class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
       set<int> s1;
       for(int e:arr){
           int comp=target-e;
           if(s1.count(comp)){
               return true;
           }
           s1.insert(e);
       }
       return false;
        
    }
};