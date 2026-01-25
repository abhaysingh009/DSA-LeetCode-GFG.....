class Solution {
  public:
    vector<vector<int>> multiply(vector<vector<int>>& mat1, vector<vector<int>>& mat2) {
        int n=mat1.size();
        vector<vector<int>>res(n,vector<int>(n));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    res[i][j]+=mat1[i][k]*mat2[k][j];
                }
            }
        }
        return res;
        
    }
};