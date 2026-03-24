class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        vector<int>pre;
        vector<int>suff;
        pre.push_back(grid[0][0]);
        int m=grid.size();
        int n=grid[0].size();
        suff.push_back(grid[m-1][n-1]);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 and j==0)continue;
                int t=((pre.back()%12345)*(grid[i][j]%12345))%12345;
                pre.push_back(t);
            }
        }
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(i==m-1 and j==n-1)continue;
                // int t=(suff.back()*grid[i][j])%12345;
                int t=((suff.back()%12345)*(grid[i][j]%12345))%12345;

                suff.push_back(t);
            }
        }
        reverse(suff.begin(),suff.end());
        vector<int>temp(m*n);
        
        for(int i=0;i<m*n;i++){
            int p=1;
            int s=1;
            if((i-1)>=0 and (i-1)<pre.size()){
                p=pre[i-1];
            }
            if((i+1)<suff.size()){
                s=suff[i+1];
            }
            int x=(p%12345*(s%12345))%12345;
            temp[i]=x;
        }
        vector<vector<int>>ans(m,vector<int>(n,0));
        int k=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=temp[k++];
            }
        }
        return ans;

    }
};