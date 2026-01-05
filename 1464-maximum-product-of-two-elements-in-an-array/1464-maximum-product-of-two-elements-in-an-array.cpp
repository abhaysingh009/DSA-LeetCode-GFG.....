class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq(nums.begin(),nums.end());
        int res=1;
        res=res*(pq.top()-1);
        pq.pop();
        res=res*(pq.top()-1);
        return res;


    }
};