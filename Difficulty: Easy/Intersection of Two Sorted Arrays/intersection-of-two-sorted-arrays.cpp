class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        vector<int>ans;
        set<int>s1(a.begin(),a.end());
        set<int>s2(b.begin(),b.end());
        for(auto it:s1){
            if(s2.count(it)){
                ans.push_back(it);
            }
        }
        return ans;
    }
};