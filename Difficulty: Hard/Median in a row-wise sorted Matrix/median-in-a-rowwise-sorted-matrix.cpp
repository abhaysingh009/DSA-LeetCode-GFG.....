class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int> res;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                res.push_back(mat[i][j]);
            }
        }
        sort(res.begin(),res.end());
        int n1=res.size();
        // if(n1%2!=0){
            return res[n1/2];
        // }
        // else{
        //     return res[(n1/2)+1]
        // }
        
    }
};
