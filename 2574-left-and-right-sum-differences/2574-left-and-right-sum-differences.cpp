class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>leftSum(n);
        vector<int>rightSum(n);
        int sum=nums[0];
        leftSum[0]=0;
        for(int i=1;i<nums.size();i++){
            leftSum[i]=sum;
            sum+=nums[i];
        }
        sum=nums[n-1];
        rightSum[n-1]=0;
        for(int i=n-2;i>=0;i--){
            rightSum[i]=sum;
            sum+=nums[i];
        }
        
        for(int i=0;i<n;i++){
            leftSum[i]=abs(leftSum[i]-rightSum[i]);
        }
        return leftSum;
        
    }
};