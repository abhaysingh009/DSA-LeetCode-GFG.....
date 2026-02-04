// User function Template for C++
class Solution {
  public:
    vector<int> getTable(int n) {
        vector<int>v;
        for (int i=1;i<=10;i++){
            v.push_back(n*i);
        }
        return v;
        
    }
};