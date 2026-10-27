class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>st(m,string(n,'.'));
        for(int i=0;i<m-1;i++){
            for(int j=1;j<n;j++){
                st[i][j]='#';
            }
        }
        return st;

        
    }
};