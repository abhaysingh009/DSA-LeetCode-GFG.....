class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>res;
        string last(n,'.');
        string f=".";
        for(int i=1;i<n;i++){
            f.push_back('#');
        }
        for(int i=0;i<m-1;i++){
            res.push_back(f);
        }
            res.push_back(last);
            return res;    

    }
};