class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        
        int n=nums.size();
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int count=0;
                int sum=0;
                for(int k=i;k<=j;k++){
                    sum+=nums[k];
                    count++;
                }
            if(count>=l and count<= r){
                if(sum>=1)ans=min(ans,sum);
            }
            
            }
            
        }
        if(ans==INT_MAX)return -1;
        return ans;
    }
};