class Solution {
public:
 bool isSorted(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        if(arr[i]>arr[i+1])return false;
    }
    return true;
 }
    int minimumPairRemoval(vector<int>& nums) {
        int ops=0;
        while(!isSorted(nums)){
            int smallest=INT_MAX;
            int idx=-1;
            for(int i=0;i<nums.size()-1;i++){
                int sum=nums[i]+nums[i+1];
                if(sum<smallest){
                    smallest=sum;
                    idx=i;
                }
            }

            nums[idx]=smallest;
            nums.erase(nums.begin()+idx+1);
            ops++;
        }
        return ops;
    }
};