class Solution {
public:
bool check(vector<int>& nums,int th,int mid){
    int sum=0;
    for(int i:nums){
        sum+=(ceil(i/(double)mid));
    }
    return sum<=th;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=1e7;
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(nums,threshold,mid)){
                ans=mid;
                high=mid-1;
            }else low=mid+1;

        }
        return ans;
        
    }
};