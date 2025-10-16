class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        set <int> s1;
        for(int i=0;i<a.size();i++){
            s1.insert(a[i]);
        }
        for(int i=0;i<b.size();i++){
            s1.insert(b[i]);
        }
        vector<int> v1;
        for(int e:s1){
            v1.push_back(e);
            
        }
        return v1;
        
    }
};