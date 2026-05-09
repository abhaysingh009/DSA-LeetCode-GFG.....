class Solution {
    void rotate(vector<int>&arr,int k){
        int n=arr.size();
        k%=n;
        reverse(arr.begin(),arr.begin()+k);
        reverse(arr.begin()+k,arr.end());
        reverse(arr.begin(),arr.end());
    }
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& mat, int k) {
    //   copy in a temp array
    //   rotate array 
    //   copy back in same postion
    int m=mat.size();
    int n=mat[0].size();
      vector<int>arr;
      int stRow=0;int endRow=m-1;
      int stCol=0;int endCol=n-1;
    while(stRow<endRow and stCol<endCol){
      //copy 1st row
      for(int j=stCol;j<=endCol;j++){
        arr.push_back(mat[stRow][j]);
      }
      stRow++;
      //copy last col
      for(int i=stRow;i<=endRow;i++){
        arr.push_back(mat[i][endCol]);
      }
      endCol--;
      //copy last row
      for(int j=endCol;j>=stCol;j--){
        arr.push_back(mat[endRow][j]);
      }
      endRow--;
      //copy first col
      for(int i=endRow;i>=stRow;i--){
        arr.push_back(mat[i][stCol]);
      }
      stCol++;
      //rotate the copied array
      rotate(arr,k);

      //copy back into main matrix
      stRow--;endCol++;endRow++;stCol--;

      int idx=0;
       for(int j=stCol;j<=endCol;j++){
        mat[stRow][j]=arr[idx++];
      }
      stRow++;
      //copy last col
      for(int i=stRow;i<=endRow;i++){
        mat[i][endCol]=arr[idx++];
      }
      endCol--;
      //copy last row
      for(int j=endCol;j>=stCol;j--){
        mat[endRow][j]=arr[idx++];
      }
      endRow--;
      //copy first col
      for(int i=endRow;i>=stRow;i--){
        mat[i][stCol]=arr[idx++];
      }
      stCol++;
      arr.clear();
    }


    return mat;        
    }
};