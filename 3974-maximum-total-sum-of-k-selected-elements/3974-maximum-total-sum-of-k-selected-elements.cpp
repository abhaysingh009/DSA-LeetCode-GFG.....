class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        priority_queue<int>pq(nums.begin(),nums.end());
        long long ans=0;
        while(!pq.empty() and k and mul){
            long long int x=pq.top();pq.pop();
            ans+=(x*mul);
            mul--;
            k--;
        }
        while(!pq.empty() and k){
            int x=pq.top();pq.pop();
            ans+=x;
            k--;
        }
        return ans;
    }
};