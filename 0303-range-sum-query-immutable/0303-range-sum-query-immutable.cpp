class NumArray {
public:
vector<int>arr;
    NumArray(vector<int>& nums) {
        int sum=nums[0];
        arr.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            sum+=nums[i];
            arr.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        int x=0;
        if(left!=0){
            x=arr[left-1];
        }
        return arr[right]-x;

        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */