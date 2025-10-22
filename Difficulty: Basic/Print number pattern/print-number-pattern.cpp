class Solution {
  public:
    vector<int> printPat(int n) {
        vector<int> res;
        for(int i=n;i>=1;i--){
            for(int j=n;j>=1;j--){
                for(int k=0;k<i;k++){
                    res.push_back(j);
                }
               
                
            }
            res.push_back(-1);
        }
        return res;
        
    }
};