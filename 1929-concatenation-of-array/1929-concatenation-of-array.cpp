class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> res(nums.begin(),nums.end());        
        // vector<int> res;
        for(int e: nums){
            res.push_back(e);
        }
        // for(int e: nums){
        //     res.push_back(e);
        // }
        return res;
        
    }
};