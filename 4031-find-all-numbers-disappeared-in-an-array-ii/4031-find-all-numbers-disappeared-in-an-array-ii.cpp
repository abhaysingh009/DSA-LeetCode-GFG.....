class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {

        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]>upper)break;
            if(nums[i]<lower)continue;

            else if(nums[i]==lower)lower++;
            else {
                ans.push_back({lower,nums[i]-1});
                lower=nums[i]+1;
            }
        }
        if (lower <= upper) {
            ans.push_back({lower, upper});
        }
        return ans;

        
    }
};