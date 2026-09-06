class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        long long sum=0;
        int n=nums.size();
       
        long long half=0;
        for(int i=0;i<n;i++) {
            sum+=nums[i];
            if(i<n/2)
            half+=nums[i];
        }
        int ans=0;
        if(half>(sum-half))ans=1;
        int k=n/2;
        for(int i=1;i<nums.size();i++){
                half+=(nums[(i+k-1)%n]);
                half-=nums[i-1];
                if(2*half>sum)ans++;

        }     
        return ans;
    }
};
