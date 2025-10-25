class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n,vector<int>(n));

        int firstRow=0;
        int lastRow=n-1;
        int firstC=0;
        int lastC=n-1;
        int k=1;
        while(firstRow<=lastRow&&firstC<=lastC){
            //top row
            for(int j=firstC;j<=lastC;j++){
                mat[firstRow][j]=k;
                k++;
            }
            firstRow++;
            //right column
            for(int i=firstRow;i<=lastRow;i++){
                mat[i][lastC]=k;
                k++;
            }
            lastC--;
            //bottom row
            if(firstRow<=lastRow){
            for(int j=lastC;j>=firstC;j-- ){
                mat[lastRow][j]=k;
                k++;
            }
            lastRow--;
            }
            //leftRow
            if(firstC<=lastC){
            for(int i=lastRow;i>=firstRow;i--){
                mat[i][firstC]=k;
                k++;

            }
            firstC++;
            }
        }
        return mat;
    }
};