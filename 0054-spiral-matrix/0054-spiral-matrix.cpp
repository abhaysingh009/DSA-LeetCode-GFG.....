class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();

        vector<int > v1;
        int firstRow=0;
        int lastRow=m-1;
        int firstC=0;
        int lastC=n-1;
        while(firstRow<=lastRow&&firstC<=lastC){
            //top row
            for(int j=firstC;j<=lastC;j++){
                v1.push_back(mat[firstRow][j]);
            }
            firstRow++;
            //right column
            for(int i=firstRow;i<=lastRow;i++){
                v1.push_back(mat[i][lastC]);
            }
            lastC--;
            //bottom row
            if(firstRow<=lastRow){
            for(int j=lastC;j>=firstC;j-- ){
                v1.push_back(mat[lastRow][j]);
            }
            lastRow--;
            }
            //leftRow
            if(firstC<=lastC){
            for(int i=lastRow;i>=firstRow;i--){
                v1.push_back(mat[i][firstC]);

            }
            firstC++;
            }
        }
        return v1;
        
    }
};