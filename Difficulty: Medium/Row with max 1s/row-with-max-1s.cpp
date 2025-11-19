// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int row=arr.size();
        int col=arr[0].size();
         int max1r=0;
         int max1row=-1;
        for(int i=0;i<row;i++){
            int count1=0;
            for(int j=0;j<col;j++){
                if(arr[i][j]==1){
                    count1++;
                }
                
            }
            
            if(count1>max1r){
                max1r=count1;
                max1row=i;
                
            }
        }
        return max1row;
        
    }
};