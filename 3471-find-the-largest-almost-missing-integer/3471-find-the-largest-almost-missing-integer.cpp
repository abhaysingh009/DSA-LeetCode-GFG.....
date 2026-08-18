class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

        int n=nums.size();
        map<int ,int>freq;
        for(int i=0;i<=n-k;i++){
            set<int>st;
            for(int j=i;j<i+k;j++){
                // freq[nums[j]]++;
                st.insert(nums[j]);
            }
            for(auto it:st){
                freq[it]++;
            }
        }
        int ans=-1;
        for(auto it:freq){
            if(it.second==1){
                ans=max(it.first,ans);
            }
        }
        return ans;
        
    }
};