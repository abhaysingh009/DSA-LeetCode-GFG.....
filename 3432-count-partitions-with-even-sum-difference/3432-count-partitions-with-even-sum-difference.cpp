class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=-nums[0];
        for(int i:nums){
            sum+=i;
        }
        int x=nums[0];
        queue<int>q(nums.begin()+1,nums.end());
        int ans=0;
        while(!q.empty()){
            if((x-sum)%2==0){
                ans++;
            }
            sum-=q.front();x+=q.front();
            q.pop();
        }
        return ans;
        
    }
};