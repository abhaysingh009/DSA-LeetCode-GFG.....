class Solution {
public:
//2 3 4 5
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        queue<int>q(nums.begin(),nums.end());
        vector<int>res;
    int len=nums.size()/2;
    for(int i=1;i<=len;i++){
        int a=q.front();q.pop();
        int b=q.front();q.pop();
        res.push_back(b);
        res.push_back(a);
    }
    return res;
        
    }
};