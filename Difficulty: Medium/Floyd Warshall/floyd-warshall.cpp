// User function template for C++

class Solution {
  public:
    void floydWarshall(vector<vector<int>> &mat) {
    
        int n=mat.size();
        int c=1e8;
        for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mat[i][k]!=c && mat[k][j]!=c)
                mat[i][j]=min(mat[i][j],(mat[i][k]+mat[k][j]));
            }
        }
        }
        return ;
        
    }
};