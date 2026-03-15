class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            int x=nums[i];
            nums[i]+=sum;
           sum+=x;
           

        }
        return nums;
        
    }
};