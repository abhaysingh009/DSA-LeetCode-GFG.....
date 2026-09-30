class Solution {
public:
int helper(int i,int j,vector<int>&nums){
    if(i>j)return 0;
    int takeI=nums[i]+min(helper(i+2,j,nums),helper(i+1,j-1,nums));
    int takeJ=nums[j]+min(helper(i,j-2,nums),helper(i+1,j-1,nums));
    return max(takeI,takeJ);

}
    bool predictTheWinner(vector<int>& nums) {
        int temp=helper(0,nums.size()-1,nums);
        int sum=0;
        for(int i:nums)sum+=i;
        return (sum-temp)<=temp;

        
    }
};