class Solution {

  public:
    vector<int> findMissing(vector<int>& arr, vector<int>& b) {
        set<int>s1(b.begin(),b.end());
        vector<int>res;
        for(int a:arr){
            if(!s1.count(a)){
                res.push_back(a);
            }
        }
        return res;
    }
};
