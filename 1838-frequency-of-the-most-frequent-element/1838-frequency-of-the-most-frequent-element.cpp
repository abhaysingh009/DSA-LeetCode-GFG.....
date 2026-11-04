class Solution {
public:
int bin_search(int target,int k,vector<long long>&pref,vector<int>&nums){
    int low=0;int high=target;
    int ans=0;
    while(low<=high){
        int mid=low+(high-low)/2;
        long long targetSum=1LL*(target-mid+1)*nums[target];

        long long actualSum;
        if(mid==0)actualSum=pref[target];
        else actualSum=pref[target]-pref[mid-1];

        if((targetSum-actualSum)<=k){
            ans=target-mid+1;
            // k-=(targetSum-actualSum);
            high=mid-1;

        }else low=mid+1;

    }
    return ans;
}
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int res=0;
        int n=nums.size();
        vector<long long>pref(n);
        long long sum=0;
        for(int i=0;i<n;i++){
            pref[i]=sum+nums[i];
            sum+=nums[i];
        }

        for(int i=0;i<n;i++){
            int cur=bin_search(i,k,pref,nums);
            res=max(res,cur);
        }
        return  res;
    }
};