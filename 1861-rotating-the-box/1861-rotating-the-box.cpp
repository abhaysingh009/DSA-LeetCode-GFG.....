class Solution {
public:
void fixPos(int i,int j,vector<vector<char>>&mat,int m){
    int idx=i+1;
    while(idx<m){
        if(mat[idx][j]=='.'){
            swap(mat[idx][j],mat[i][j]);
            i=idx;
            idx++;
        }else{
            break;
        }
    }
}
void Rotate(vector<vector<char>>&mat,vector<vector<char>>&temp){
    int m=mat.size();
    int n=mat[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            temp[j][m-1-i]=mat[i][j];
        }
    }
}
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m=boxGrid.size();
        int n=boxGrid[0].size();
        vector<vector<char>>ans(n,vector<char>(m));
        Rotate(boxGrid,ans);
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(ans[i][j]=='#'){
                    fixPos(i,j,ans,n);
                }
            }
        }
        return ans;
        
    }
};