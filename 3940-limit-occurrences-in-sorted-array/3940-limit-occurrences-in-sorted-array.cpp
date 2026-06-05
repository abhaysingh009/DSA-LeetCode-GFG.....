class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        map<int,int>freq;
        for(int i:nums){
            freq[i]++;
        }
        nums.clear();
        for(auto it:freq){
            if(it.second>=k){
                int x=k;
                while(x--){
                    nums.push_back(it.first);
                }
            }else {
                while(it.second--){
                    nums.push_back(it.first);
                }
            }
        }
       return nums; 
    }
};