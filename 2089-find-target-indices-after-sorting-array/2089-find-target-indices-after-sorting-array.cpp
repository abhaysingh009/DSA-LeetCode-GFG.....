class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==target){
        //         ans.push_back(i);
        //     }
        // }
        

        int low=0;int high=nums.size()-1;
        int lb=nums.size();
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=target){
                lb=mid;
                high=mid-1;
            }else low=mid+1;
        }
        // upper bound
        low=0;high=nums.size()-1;
        int ub=nums.size();
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>target){
                ub=mid;
                high=mid-1;
            }else low=mid+1;
        }
        for(int i=lb;i<ub;i++){
            ans.push_back(i);
        }
        return ans;
    }
};
// 1 2 2 3 5 