class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int ans=0;

        for(auto &p:freq){
            if(p.second%k==0){
                ans+=p.first*p.second;
                
            }
        }
        return ans;

    }
};