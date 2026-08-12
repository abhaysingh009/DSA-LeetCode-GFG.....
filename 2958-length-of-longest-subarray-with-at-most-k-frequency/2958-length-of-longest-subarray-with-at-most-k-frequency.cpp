class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        map<int,int>freq;
        int i=0;int j=0;
        int n=nums.size();
        int res=INT_MIN;
        while(j<n){
            freq[nums[j]]++;
            while(freq[nums[j]]>k){
                freq[nums[i]]--;
                i++;
            }
            res=max(res,j-i+1);
            j++;
            

        }
        return res;
        
    }
};


