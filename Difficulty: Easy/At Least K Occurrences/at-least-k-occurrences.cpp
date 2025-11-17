class Solution {
  public:
    int firstElementKTime(vector<int>& arr, int k) {
         map<int ,int>mp;
      
       for (int e : arr) {
            mp[e]++;               
            if (mp[e] == k) {      
                return e;
            }
        }
        return -1;
  }
};