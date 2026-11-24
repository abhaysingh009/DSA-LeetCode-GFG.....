class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int prod=1;
            int gc=0;
            int lc=1;
            for(int j=i;j<n;j++){
                prod=1LL*prod*nums[j];
                gc=gcd(gc,nums[j]);
                lc=lcm(lc,nums[j]);
                if(prod==(gc*lc)){
                    ans=max(ans,j-i+1);
                }
            }
            
        }
        return ans;
    }
};