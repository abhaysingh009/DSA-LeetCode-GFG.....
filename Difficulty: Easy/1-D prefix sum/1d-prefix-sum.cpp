class Solution {
  public:
    vector<int> prefSum(vector<int> &arr) {
        vector<int>ans;
        ans.push_back(arr[0]);
        int sum=arr[0];
        int n=arr.size();
        for(int i=1;i<n;i++){
            ans.push_back(sum+arr[i]);
            sum=ans.back();
        }
        return ans;
        
    }
};