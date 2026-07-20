class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int curr=grid[0][0];
        int prev=grid[0][0];
        int m=grid.size();
        int n=grid[0].size();
        k%=(m*n);
        while(k--){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(j==0 and i==0)continue;
                curr=grid[i][j];
                grid[i][j]=prev;
                prev=curr;
            }
        }
        grid[0][0]=prev;
        }
        return grid;
    }
};