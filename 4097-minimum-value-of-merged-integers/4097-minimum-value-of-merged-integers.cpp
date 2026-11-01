class Solution {
public:
int merge(int m,int n){
    int c=1;
    int x=n;
    while(n>0){
        c*=10;
        n/=10;
    }
    return m*c+x;
}
    int minMergedInteger(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        for(int i=0;i<n-1;i+=2){
            ans=min(ans,merge(nums[i],nums[i+1]));
        }
        return ans;
    }
};