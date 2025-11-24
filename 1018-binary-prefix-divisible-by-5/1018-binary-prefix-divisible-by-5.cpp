class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
    int value=0;
        for(int e:nums) {
            value=(value*2+e)%5;

            ans.push_back(value==0);

        }
        return ans;

        
    }
};