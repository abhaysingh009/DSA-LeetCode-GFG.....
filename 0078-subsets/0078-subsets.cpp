class Solution {
public:
void printSub(vector<int>&arr,int i,vector<vector<int>>&ans,vector<int>&temp){
    if(i>=arr.size()){
        ans.push_back(temp);
        return;
    }
    temp.push_back(arr[i]);
    
    printSub(arr,i+1,ans,temp);
    
    temp.pop_back();
    
    printSub(arr,i+1,ans,temp);
    
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        printSub(nums,0,ans,temp);
        return ans;
        
    }
};