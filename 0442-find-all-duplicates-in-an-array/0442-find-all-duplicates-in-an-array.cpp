class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>res;
        set<int>s1;
        for(int i=0;i<nums.size();i++){
            if(s1.count(nums[i])){
                res.push_back(nums[i]);
            }
            else{
                s1.insert(nums[i]);
            }
        }
        return res; 
        
    }
};