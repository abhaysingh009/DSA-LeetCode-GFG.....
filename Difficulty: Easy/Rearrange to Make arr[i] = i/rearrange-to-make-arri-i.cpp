class Solution {
  public:
    void modifyArray(vector<int>& arr) {
        set<int>st(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(st.count(i))arr[i]=i;
            else arr[i]=-1;
        }
        
    }
};
