class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        for(int i=0;i<queries.size();i++){
        int li=queries[i][0];
        int ri=queries[i][1];
        int ki=queries[i][2];
        int vi=queries[i][3];
        int idx=li;
        while(idx<=ri){
            nums[idx]=((long long)nums[idx]*vi)%1000000007;
            
            idx+=ki;
        }
        }
        int ans=0;
        for(int e:nums){
            ans^=e;
        }

           return ans; 
    }
};