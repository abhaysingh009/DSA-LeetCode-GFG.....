class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>row(m,0);
        vector<int>col(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    row[i]++;
                    col[j]++;
                }
            }
        }
        for(int i:row){
            cout<<i<<" ";
        }
        cout<<"\n";
        for(int i:col){
            cout<<i<<" ";
        }
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 and(row[i]>1 or col[j]>1))count++;
            }
        }
        return count;
    }
};
// 1 0
// 1 1 