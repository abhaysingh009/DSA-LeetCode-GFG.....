class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        int m=mat.size();
        int n=mat[0].size();
        int fr=0;
        int lr=m-1;
        int fc=0;
        int lc=n-1;
        vector<int> res;
        while(fr<=lr and fc<=lc){
            //upper
            for(int j=fc;j<=lc;j++){
                res.push_back(mat[fr][j]);
                
                
            }
            fr++;
            //right
            for(int i=fr;i<=lr;i++){
                res.push_back(mat[i][lc]);
            }
            lc--;
            //bottom
            if(fr<=lr){
            for(int j=lc;j>=fc;j--){
                res.push_back(mat[lr][j]);
            }
            lr--;
            }
            if(fc<=lc){
            for(int i=lr;i>=fr;i--){
                res.push_back(mat[i][fc]);
                
            }
            fc++;
            }
        }
        return res;
        
    }
};