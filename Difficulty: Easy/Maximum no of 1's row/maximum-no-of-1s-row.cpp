class Solution {
  public:
    int maxOnes(vector<vector<int>> &arr, int N, int M) {
        int max1=0;
        int row=-1;
        for(int i=0;i<N;i++){
        int row1=0;
            for(int j=0;j<M;j++){
                if(arr[i][j]==1){
                    row1=M-j;
                    break;
                }
            }
            if(row1>max1){
                max1=row1;
                row=i;
                
            }
        }
        return row;
        
    }
};