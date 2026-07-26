class Solution {
  public:
    bool subArrayExists(vector<int>& arr) {
        int n=arr.size();
        set <int>st;
        vector<int>pref(n);
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            pref[i]=sum;
            
            if(sum==0)return 1;
            
            if(st.find(sum)!=st.end()){
                return 1;
            }
            st.insert(sum);
            
        }
        return 0;
        
    }
};