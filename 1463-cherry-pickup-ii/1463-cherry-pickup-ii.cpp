class Solution {
public:
int memo(vector<vector<int>>&mat,int i,int j,int y,vector<vector<vector<int>>>&dp){
    int m= mat.size();
    int n=mat[0].size();

    if(i>=m or j>=n or j<0 or y>=n or y<0)return 0;

    int ans=mat[i][j];
    if(j!=y) ans+=mat[i][y];
    if(dp[i][j][y]!=-1)return dp[i][j][y];
//    int f1 =  memo(mat,i+1,j-1,y-1,dp); 
//    int f2 =  memo(mat,i+1,j-1,y,dp); 
//    int f3 =  memo(mat,i+1,j-1,y+1,dp); 
//    int f4 =  memo(mat,i+1,j,y-1,dp); 
//    int f5 =  memo(mat,i+1,j,y,dp); 
//    int f6 =  memo(mat,i+1,j,y+1,dp); 
//    int f7 =  memo(mat,i+1,j+1,y-1,dp); 
//    int f8 =  memo(mat,i+1,j+1,y,dp); 
//    int f9 =  memo(mat,i+1,j+1,y+1,dp);
        int temp=0; 
        for(int a=-1;a<=1;a++){
            for(int b=-1;b<=1;b++){
               temp=max(temp, memo(mat,i+1,j+a,y+b,dp));
            }
        }

//    int temp=max({f1,f2,f3,f4,f5,f6,f7,f8,f9});

   return dp[i][j][y]=ans+temp;

    
}
// int helper(vector<vector<int>>&mat,int i,int j, int x, int y,vector<vector<vector<vector<int>>>>&dp){
//     int m= mat.size();
//     int n=mat[0].size();

//     if(i>=m or j>=n or j<0 or x>=m or y>=n or y<0)return 0;

//     int ans=mat[i][j];

//     if(j!=y) ans+=mat[x][y];
//     if(dp[i][j][x][y]!=-1)return dp[i][j][x][y];
//    int f1 =  helper(mat,i+1,j-1,x+1,y-1,dp); 
//    int f2 =  helper(mat,i+1,j-1,x+1,y,dp); 
//    int f3 =  helper(mat,i+1,j-1,x+1,y+1,dp); 
//    int f4 =  helper(mat,i+1,j,x+1,y-1,dp); 
//    int f5 =  helper(mat,i+1,j,x+1,y,dp); 
//    int f6 =  helper(mat,i+1,j,x+1,y+1,dp); 
//    int f7 =  helper(mat,i+1,j+1,x+1,y-1,dp); 
//    int f8 =  helper(mat,i+1,j+1,x+1,y,dp); 
//    int f9 =  helper(mat,i+1,j+1,x+1,y+1,dp); 

//    int temp=max({f1,f2,f3,f4,f5,f6,f7,f8,f9});

//    return dp[i][j][x][y]=ans+temp;

    
// }
    int cherryPickup(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        // vector<vector<vector<vector<int>>>>dp(m,vector<vector<vector<int>>>(n,vector<vector<int>>(m,vector<int>(n,-1))));

    //    return helper(grid,0,0,0,n-1,dp);
    vector<vector<vector<int>>>dp(m,vector<vector<int>>(n,vector<int>(n,-1)));
       return memo(grid,0,0,n-1,dp);
    }
};