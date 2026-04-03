class Solution {
  public:
    vector<int> diagView(vector<vector<int>> mat) {
        int n=mat.size();
        vector<vector<int>>arr(2*n-1);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i+j].push_back(mat[i][j]);
            }
        }
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[i].size();j++){
                ans.push_back(arr[i][j]);
            }
        }
        return ans;
    }
};