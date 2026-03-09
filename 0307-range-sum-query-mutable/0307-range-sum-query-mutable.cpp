class NumArray {
public:
vector<int>arr;
vector<int>nums;

     NumArray(vector<int>& nums) {
        this->nums=nums;
        int sum=nums[0];
        arr.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            sum+=nums[i];
            arr.push_back(sum);
        }
    }
    
    
    void update(int index, int val) {
        int prev=nums[index];
        for(int i=index;i<arr.size();i++){
            arr[i]-=prev;
            arr[i]+=val;

        }
        nums[index]=val;

        
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
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
 