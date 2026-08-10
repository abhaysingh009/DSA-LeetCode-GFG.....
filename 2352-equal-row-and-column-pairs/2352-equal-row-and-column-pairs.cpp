class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int>row;
        map<vector<int>,int>col;
        int n=grid.size();
        for(int i=0;i<n;i++){
            vector<int>temp;
            vector<int>temp2;
            for(int j=0;j<n;j++){
                temp.push_back(grid[i][j]);
                temp2.push_back(grid[j][i]);
            }
            row[temp]++;
            col[temp2]++;
        }
        int ans=0;
        for(auto it:row){
            if(col.count(it.first)){
                ans+=(it.second*col[it.first]);
            }
        }
        return ans;
    }
};