class Solution {
public:
void helper(int i,vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp,vector<bool>&used){     if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }

    for(int j=i;j<nums.size();j++){
        if(!used[j]){
            temp.push_back(nums[j]);
            used[j]=1;
        
        helper(0,nums,ans,temp,used);
        used[j]=0;
        temp.pop_back();
        }

    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<bool>used(n,0);
        vector<int>temp;
        int idx=0;
        helper(idx,nums,ans,temp,used);
        return ans;
            
    }
};