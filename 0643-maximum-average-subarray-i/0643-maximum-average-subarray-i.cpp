class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        double avg=0;
        int n=nums.size();
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        avg=sum/k;
        int f=0;
        for(int i=k;i<n;i++){
            sum-=nums[f++];
            sum+=nums[i];
            avg=max(avg,sum/k);

        }
        return avg;
    }
};