class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        set<int>st(nums.begin(),nums.end());
        int ma=INT_MIN;
        int mi=INT_MAX;
        for(int i:nums){
            if(i>ma){
                ma=i;
            }
            if(i<mi){
                mi=i;
            }
        }
        vector<int>ans;
        for(int i=mi;i<=ma;i++){
            if(!st.count(i)){
                ans.push_back(i);
            }
        }
        // sort(nums.begin(),nums.end());
        return ans;
        
    }
};