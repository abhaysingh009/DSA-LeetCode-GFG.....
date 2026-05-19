class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size();
        int m=nums[0];
        for(int i:nums){
            m=max(m,i);
        }

        if(m+1!=n)return 0;

        unordered_map<int,int>freq;
        for(int i:nums){
            freq[i]++;
        }
        for(auto it:freq){
            if(it.first!=m){
                if(it.second!=1)return 0;
            }else{
                if(it.second!=2)return 0;
            }
        }
        return 1;
        
    }
};