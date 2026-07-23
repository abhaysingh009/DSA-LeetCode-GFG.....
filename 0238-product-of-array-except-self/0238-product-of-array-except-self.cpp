class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =nums.size();
        vector<int>pre(n);
        vector<int>suff(n);
        // prefix 
        int prev=nums[0];
        pre[0]=1;
        for(int i=1;i<n;i++){
            pre[i]=prev;
            prev*=nums[i];
        }
        // suffix
        // prev=nums[n-1];
        // suff[n-1]=1;
        // for(int i=n-2;i>=0;i--){
        //     suff[i]=prev;
        //     prev*=nums[i];
        // }
        // for(int i=0;i<n;i++){
        //     pre[i]*=suff[i];
        // }
        prev=nums[n-1];
        for(int i=n-2;i>=0;i--){
            pre[i]*=prev;
            prev*=nums[i];
        }
        return pre;
    }
};