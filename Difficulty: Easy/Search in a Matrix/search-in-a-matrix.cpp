// User function Template for C++
class Solution {
  public:
    // Function to search a given integer in a matrix.
    bool searchMatrix(vector<vector<int>> &arr, int x) {
        int m=arr.size();
        int n=arr[0].size();
        
        for(int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                if(arr[i][j]==x){
                    return true;
                }
            }
        }
        return false;
        
        
    }
};