class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
        for(int e:nums){
            sum+=e;
        }
        return sum%k;
        
    }
};