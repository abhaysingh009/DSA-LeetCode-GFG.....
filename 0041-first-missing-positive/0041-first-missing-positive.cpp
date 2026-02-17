class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        int greatest=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>greatest){
                greatest=nums[i];
            }
        }
        if(greatest<0)return 1;
        set<int>s1(nums.begin(),nums.end());
        for(int i=1;i<=greatest;i++){
            if(!(s1.count(i))){
                return i;
            }
       
        }
       
        return greatest+1;
        
    }
};