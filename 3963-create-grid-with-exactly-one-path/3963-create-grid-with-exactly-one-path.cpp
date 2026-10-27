class Solution {
public:
    vector<string> createGrid(int m, int n) {
// Approach 1:O(m*n) time, O(m*n) space
        // vector<string>st(m,string(n,'.')); // m*n
        // for(int i=0;i<m-1;i++){               // m*n
        //     for(int j=1;j<n;j++){
        //         st[i][j]='#';
        //     }
        // }
        // return st;


// Approach 2:O(m*n) overall time, O(m*n) space
        vector<string>st(m,string(n,'#')); // m*n
        // fil first column with dot
        for(int i=0;i<m;i++){      // m
           st[i][0]='.';
        }
        // fill last row with dot
        for(int j=0;j<n;j++){     //n
            st[m-1][j]='.';
        }
        return st;

        
    }
};