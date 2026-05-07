class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        vector<vector<int>>temp(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                temp[n-1-j][i]=mat[i][j];
            }
        }
        mat=temp;
        
    }
};
