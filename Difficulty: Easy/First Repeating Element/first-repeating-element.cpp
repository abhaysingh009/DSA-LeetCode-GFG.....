class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        int n=arr.size();
        set<int>st;
        int idx=-1;
        for(int i=n-1;i>=0;i--){
            if(st.count(arr[i])){
                idx=i+1;
            }
            st.insert(arr[i]);
        }
        return idx;
        
    }
};