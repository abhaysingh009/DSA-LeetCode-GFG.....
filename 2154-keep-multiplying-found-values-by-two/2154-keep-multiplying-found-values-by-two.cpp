class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {

        set s1(nums.begin(),nums.end());

        while(s1.count(original)){
            original*=2;
        }
        return original;
    }
};