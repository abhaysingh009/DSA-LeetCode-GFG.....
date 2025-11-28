class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int max1Row=0;
        int max1=0;

        for(int i=0;i<m;i++){
           int count=0;
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            if(count>max1){
                max1Row=i;
                max1=count;
                
            }
        }
        return{max1Row,max1};
        
    }
};