class Solution {
public:
int findrange(int n){
    int large=INT_MIN;
    int small=INT_MAX;
    while(n>0){
        int rem=n%10;
        large=max(rem,large);
        small=min(rem,small);
        n/=10;
    }
    return large-small;
}
    int maxDigitRange(vector<int>& nums) {
        int ans=0;
        int range=INT_MIN;
        for(int i:nums){
            int r=findrange(i);
            if(r>range){
                ans=0;
                ans+=i;
                range=r;
            }else if(r==range){
                ans+=i;
            }
        }
        return ans;
    }
};