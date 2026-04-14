class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<int>res;
        int n=nums.size();
        res.push_back(nums[n-1]);
        for(int i=n-2;i>=0;i--){
            if(res.size()==k)break;
            if(res.back()!=nums[i]){
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};