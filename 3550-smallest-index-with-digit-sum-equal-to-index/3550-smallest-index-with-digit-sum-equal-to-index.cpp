class Solution {
public:
int sum(int n){
    int s=0;
    while(n>0){
        s+=(n%10);
        n/=10;
    }
    return s;
}
    int smallestIndex(vector<int>& nums) {
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            int x=sum(nums[i]);
            if(x==i){
                ans=i;
                break;
            }
        }
        return ans;
    }
};