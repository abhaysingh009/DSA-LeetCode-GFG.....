class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int i:nums){
            freq[i]++;
        }
        int ans=0;
        for(int i:nums){
            if(freq[i]>0 and freq[k-i]>0){
                if(i==(k-i)){
                    if(freq[i]<2)continue;
                }
                ans++;
                freq[i]--;
                freq[k-i]--;
            }
        }
        return ans;
    }
};