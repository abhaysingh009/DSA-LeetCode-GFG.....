class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg=0;
        for(int e:nums){
            if(e==0){
                return 0;
            }
            else if(e<0){
                neg++;
            }
        }
        return (neg%2==0)?1:-1;
    }
};